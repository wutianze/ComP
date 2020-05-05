- 定制cyber的`module`：
	1. 定制dag文件
		```shell
			module_config {
	    	module_library : "/apollo/bazel-bin/cyber/AD_Middle_Test/cyber/intra_component/libintra.so"
	    	components {
	        class_name : "IntraComponent"
	        config {
	            name : "intracomponent"# name用来生成协程的名字，如果有channel则为[name]_[channel]
	            readers {
	                channel: "/apollo/prediction"
	                qos_profile:{# qos设置，在`cyber/proto/qos_profile.proto`中定义
				history:HISTORY_KEEP_LAST # HISTORY_KEEP_LAST（默认）模式把sample存到depth数量，超过了会用新的数据覆盖旧数据，HISTORY_KEEP_ALL模式把所有sample存在内存，HISTORY_SYSTEM_DEFAULT为fastrtps默认值KEEP_LAST
				depth:1 # 默认是1，和history::HISTORY_KEEP_LAST配合使用
				mps:0 # 默认0，每秒的message数量，针对Publisher，用来设置
				reliability:RELIABILITY_RELIABLE # RELIABILITY_RELIABLE模式（模式）下发送者需要收到接收者的回执，RELIABILITY_BEST_EFFORT不需要回执，延迟更低但有可能有loss，RELIABILITY_SYSTEM_DEFAULT为fastrtps默认值BEST_EFFORT
				durability:DURABILITY_VOLATILE # 这部分是处理subscriber订阅前历史数据的策略，DURABILITY_VOLATILE（默认）模式会忽略订阅前的数据（自动驾驶场景其实一般都是这个模式，历史数据没用），DURABILITY_TRANSIENT_LOCAL模式会把subscriber的history用历史数据填满，DURABILITY_SYSTEM_DEFAULT为fastrtps默认值TRANSIENT_LOCAL
		}
		pending_queue_size:1 # 默认为1，指定的是DataVisitor的缓存长度，长度越长信息丢失越少但实时性越差
	            }
	            readers {
	                channel: "/apollo/test"
	            }
	        }
	      }
			timer_components{
			class_name:"IntraTimer"
			config{
			name:"intratimer"
			interval:1 #单位ms，每n ms调用一次，在普通pc上默认最大是65536，最大值会变化，具体见源码
		}
		}
	    }
		```
		dag文件展示了该`module`所需的所有`component`，并且为每个`component`指定了`reader&writer`，因为`component`自带一个`node`所以我们不需要在代码里特地再创建`reader&writer`了。
	2. 定制BUILD文件
		```powershell
		load("//tools:cpplint.bzl", "cpplint")
	
		package(default_visibility = ["//visibility:public"])
	
		cc_binary(
		    name = "libintra.so",
	    	linkopts = ["-shared"],
	    	linkstatic = False,
	    	deps = [":intra_component_lib",":intra_timer_lib"],
		)
		
		cc_library(
	    	name = "intra_component_lib",
	    	srcs = ["intra_component.cc"],
	    	hdrs = ["intra_component.h"],
	    	deps = [
	        	"//cyber",
	        	"//cyber/examples/proto:examples_cc_proto",
	    	],
		)
		
		cc_library(
				name = "intra_timer_lib",
				srcs = ["intra_timer.cc"],
				hdrs = ["intra_timer.h"],
				deps = ["//cyber",
		  			"//cyber/examples/proto:examples_cc_proto",		
		  	],
				)
		cpplint()
		```
	具体可以搜bazel相关的资料，一般一个`component`会对应一个cc_library，然后最终module也会对应生成一个.so，它依赖每个component的库。接下去只要具体实现每个`component`就行了.
	
	3. 定制.launch文件
		```powershell
		<cyber>
	    	<module>
	        <name>intra</name> # module的name,没什么用，就是在屏幕上打印一下
	        <dag_conf>/apollo/cyber/AD_Middle_Test/cyber/intra_component/intra.dag</dag_conf>
	        <process_name>intra</process_name> #会用作mainboard的-p参数， cyber_launch stop xxx里指定的xxx，默认为'mainboard_default_' + str(os.getpid())
	        <sched_name>CYBER_NO_DEFAULT</sched_name># 指定该module的mainboard的-s参数，默认为CYBER_DEFAULT，这个参数最后就设置了一下global data，完全没用到，耍我啊!
	        <type>xxx</type># 默认为library
	    	</module>
			<module>
	        <name>common</name>
	        <dag_conf>/apollo/cyber/examples/common_component_example/common.dag</dag_conf>
	        <process_name>common</process_name>
	    	</module>
			</cyber>
		```
	`xxx.launch`的解析有一定迷惑性，首先它会去找所有的process_name，为每个process_name维护一个dag列表（也就是说不同module的process_name可以一样），之后会为每个process_name启动一个mainboard来运行。那如果同一个process_name的不同module配置起冲突怎么办，cyber_launch会以第一个的配置为准。
	4. 定制xxx_shed_conf.conf
		默认的调度配置在`cyber/conf/cyber.pb.conf`里的scheduler_conf（默认是classic模式，具体调度器相关内容见专栏中调度器介绍），默认只是指定了一下开的proc数量。cyber中`.launch`中的process_name对应了一个`process_group`对应了一个`scheduler`，启动时指定的process_name（mainboard中的-p）会被用来读取`/apollo/cyber/conf/[process_group].conf`，所以我们如果想自己配置调度器，则需要根据process_name制作[process_name/group].conf。
		```powershell
		scheduler_conf {
		    policy: "classic"# 选择是classic调度还是choreography调度，默认classic
		    process_level_cpuset: "0-7,16-23" # all threads in the process are on the cpuset，这里指的是逻辑核，如果超出pc范围不会报错但无效
		    routine_num: 100 # cyber.pb.conf里的默认配置，初始化协程池时用到，如果不设置的话会根据GlobalData::Instance()->ComponentNums自动设置，数量等于该module所有component的数量（不含timercomponent）加上设置的task_pool_size（classic就是proc_num）
		    default_proc_num: 16# cyber.pb.conf里的默认配置，默认的线程数量，如果已经有group配置的话就不需要了
		    threads: [#threads都是系统自带的一些系统，比如日志、计时、共享内存管理等等
		        {
		            name: "async_log"
		            cpuset: "1"
		            policy: "SCHED_OTHER"   # policy: SCHED_OTHER,SCHED_RR,SCHED_FIFO
		            prio: 0#默认为1
		        }, {
		            name: "shm"
		            cpuset: "2"
		            policy: "SCHED_FIFO"
		            prio: 10
		        }
		    ]
		    classic_conf {
		        groups: [
		            {
		                name: "group1"#默认为default_grp
		                processor_num: 16 #分配的cpu个数
		                affinity: "range"#cpu分配运行策略
		                cpuset: "0-7,16-23"#该group可用的cpu
		                processor_policy: "SCHED_OTHER"  # cpu上线程切换策略，policy: SCHED_OTHER（分时调度）,SCHED_RR（时间片轮转）,SCHED_FIFO（先到先服务），默认为SCHED_OTHER，其他两个是实时调度策略
		                processor_prio: 0#默认为0，对于SCHED_OTHER来说，取值为-20-19，值越小优先级越高，对于其他策略取值为1-99，同样是值越小优先级越高
		                tasks: [
		                    {
		                        name: "E"#名字一般为component的名字即dag文件中components.config.name字段（Component::Proc）、component的名字+'_'+channel名即dag文件中components.config.readers.channel（Reader），还有TimerComponent里的/internal/task[num]
		                        prio: 0#配置文件里默认为1，但如果task在配置文件中没有对应的名字那么默认值是源码中协程结构的默认值0，值越大优先级越高，取值范围0-19
		                    }
		                ]
		            },{
		                name: "group2"
		                processor_num: 16
		                affinity: "1to1"
		                cpuset: "8-15,24-31"
		                processor_policy: "SCHED_OTHER"
		                processor_prio: 0
		                tasks: [
		                    {
		                        name: "A"
		                        prio: 0
		                    },{
		                        name: "B"
		                        prio: 1
		                    },{
		                        name: "C"
		                        prio: 2
		                    },{
		                        name: "D"
		                        prio: 3
		                    }
		                ]
		            }
		        ]
		    }
		    choreography_conf {
		        choreography_processor_num: 8
		        choreography_affinity: "range"
		        choreography_cpuset: "0-7"
		        choreography_processor_policy: "SCHED_FIFO" # policy: SCHED_OTHER,SCHED_RR,SCHED_FIFO
		        choreography_processor_prio: 10
		
		        pool_processor_num: 8
		        pool_affinity: "range"
		        pool_cpuset: "16-23"
		        pool_processor_policy: "SCHED_OTHER"
		        pool_processor_prio: 0
		
		        tasks: [
		            {
		                name: "A"
		                processor: 0
		                prio: 1 #默认为1
		            },
		            {
		                name: "B"
		                processor: 0
		                prio: 2
		            },
		            {
		                name: "C"
		                processor: 1
		                prio: 1
		            },
		            {
		                name: "D"
		                processor: 1
		                prio: 2
		            },
		            {
		                name: "E"
		            }
		        ]
		    }
		}
		```
	6.  定制传输数据：
		步骤：
		1. 定义一个proto文件：
			```powershell
			syntax = "proto2";//指定protobuf版本
			
			package apollo.cyber.AD_Middle_Test.cyber;//重要，一般设置为绝对路径，这个路径也是你后面代码中的namespace
			
			message SamplesTest1 {
			  optional string class_name = 1;
			  optional string case_name = 2;
			};
			
			message Chatter {
			  optional uint64 timestamp = 1;
			  optional uint64 lidar_timestamp = 2;
			  optional uint64 seq = 3;
			  optional bytes content = 4;
			};
			
			message Bytes {
			  required bytes content = 1;//bytes设置需要用""
			```
				2. BUILD文件中添加：
			```powershell
			cc_proto_library(
				name = "test_cc_proto",
				deps = [
					":test_proto",
						],
							)
			proto_library(
				name = "test_proto",
				srcs = ["test.proto"],
			                   )
			```
	***Tip:在代码中include编译好的头文件（不会显示），名字为xxx.pb.h对应xxx.proto，生成的头文件等的位置在`/apollo/bazel-genfiles/path_to_dir`***
# cyber_launch
- Start用法
	`cyber_launch start xxxx.launch`，传给mainboard的参数都在`.launch`文件中指定，具体见上文`.launch`写法。`xx.launch`指定了多个module的dag文件，每个module都会开启一个mainboard。
- Stop用法
	用`cyber_launch stop`（不带参数）会停止所有的module。使用`cyber_launch stop xxx`会停止某个`process_group`的module（停止某个dag）。
# mainboard
很简单，只要关注`-d -p`两个参数就行，`-d`用来读dag文件，`-p`指定了`scheduler`配置文件的名字（查找路径为`/apollo/cyber/conf/[process_group].conf`），默认的设置为`cyber/conf/cyber.pb.conf`中的`scheduler_conf`。一个mainboard一次只能有一个`-p`（它们共用一个进程，所以这些module的通信都会变成intra），但可以有多个`-d`。这里需要注意的是`cyber/conf/cyber.pb.conf`不光提供调度配置文件而且提供其他的一些配置，所以无论有没有另外的调度配置文件，`cyber.pb.conf`中除了调度配置以外的配置还是会被读取并设置的。

# 运行时情况：
实际上cyber不是一个常驻的后台管理系统，它是和每个`mainboard`一一对应的，也就是说每个process_group会对应一整套cyber（包括global data, scheduler）。你可能会问那它们之间的通信如何互相发现呢，答案是它们之间的通信通过全局单例来互相可见，具体见专栏中的通信模块介绍。
- 运行时的默认值
这一部分主要是cyber的一些参数默认值都是什么，是如何设置的。实际上cyber的默认值都存在`GlobalData`（`cyber/common/global_data`）中，它在mainboard初始化的时候会先去默认的文件`cyber/conf/cyber.pb.conf`读取配置，所以一般你可以改那个文件来修改运行时的部分配置，那如果该文件中没有指定呢，cyber会根据proto文件（`cyber/proto/cyber_conf.proto`）中的default值来生成这些配置。主要包含4类设置：
```python
# cyber_conf.proto
import "cyber/proto/scheduler_conf.proto";
import "cyber/proto/transport_conf.proto";
import "cyber/proto/run_mode_conf.proto";
import "cyber/proto/perf_conf.proto";
```
可以去这些proto文件中找到相应的系统默认配置。当然这些默认值有些会在程序运行时被另外设置成新的默认值，这些就得一点点阅读源码或日志输出了，也是cyber比较坑的一个地方。

