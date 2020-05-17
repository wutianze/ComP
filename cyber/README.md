# Test:
## 目录结构：
- ~~旧简单测试文件：test_component/~~
- ~~旧数据处理脚本：data/~~
- ~~旧简单测试程序：intra_no_component.cc~~
- 新简单测试文件：simple_s/
- 实际场景测试文件：detect_s/
- 传送数据定义文件：test.proto
## 简单测试：
### 主要测试1to1,1toN,Nto1等非真实负载的纯通信场景
### 用法：
- S.cc为一个定时器，每隔一定时间发送一条数据，C.cc为接收器，订阅S.cc发布的消息并记录数据传送的延迟
- 设置运行的相关参数，S.cc在运行时会去读取一个参数设置文件（手动生成，在run.sh里的param txt部分），每个S实例都会对应一个，命名为param[S的node name，我们用的是s0,s1...].txt，这里面记录了发送数据的大小和channel topic（example: 1024 c0，即1024byte一条msg，发布在c0这个topic上），发送的间隔是在.dag文件中interval中定义的，单位是ms，即每隔n ms发送一次数据；而C.cc订阅的topic是在.dag文件中设置的，其readers.channel字段设置为/c0即可订阅c0的信息，至于一个C接收多个channel消息是通过修改C的struct结构和对应的Proc函数完成，见C.cc的注释，同时dag文件也需要对应指定接收的topic。
- 运行指令： run.sh msg_size number_of_param.txt_to_generate launch&config_file_name, example: ./run.sh 1024 1 1t1，即发送的消息包含1024byte的实际内容，生成一个param.txt(即只有一个S)，调用的是1t1.launch，并且会把目录下的1t1*.conf（以1t1为前缀的所有调度配置文件）拷贝到/apollo/cyber/conf/下。
- 准备步骤：进行一个实验前，先根据需要定制dag文件，在同一个进程下（用intra通信）的S和C放在一个dag，不同进程的分两个dag；然后创建一个launch来指定相关dag,并为launch里的每个process_name定制一个conf调度文件；如果修改了cc文件需要编译则在/apollo目录下运行./apollo.sh build_cyber，不然就直接运行./run.sh 1024 1 1t1
- 目前该目录下提供了1t1和1tn两个例子，根据它们做一些修改就可以了。
## 真实场景测试：
### 主要测试真实的感知场景
### 用法：
- 概述：YoloDetect.cc,Line.cc,CameraTimer.cc,TrackerApollo.cc,FusionFinal.cc分别对应了不同的应用：物体检测、寻线、图片数据产生器、追踪、数据整合。顺序为从CameraTimer产生数据，YoloDetect\Line\TrackerApollo处理这些数据，处理结果汇总到FusionFinal。传输的数据格式定义都在detect_msg.proto中
- TODO
