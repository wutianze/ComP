# environment init
- source /opt/ros/xx/setup.bash
- cd /ros2_test/AD_Middle_Test/ros2
- . install/setup.bash
- how to compile: in ros2/ run `colcon build`
- if error says couldn't find xx.so：change /etc/ld.so.conf.d/opencv.conf，add the address of xxx.so, for ex：/usr/local/lib/（can use `find / -name "xxx.so"`）, then ldconfig -v
- libxx.so generates in app dir should be put in /lib or /usr/lib

# intra
- Producer(the node's name, sleep ms, msg size, topic name); Consumer(node name & record file name prefix, topic name, topic number). If the topic number of Consumer > 1, it means the consumer will have to do data fusion, then the topic will be topic_name+'0', +'1'...
- intra_pipe parameters: 1: topic name prefix; 2: sleep time in ms, if pub_num==1, the sleep time=the param, if pub_num>1, this param is a index, you should change every Producer's sleep time in intra_pipe.cpp; 3: msg size; 4: topic number of Consumer(> 1 only when you want to test data fusion); 5: number of Producer; 6: number of Consumer
- run_intra.sh parameters: the first is index number, the other is same as intra_pipe's, for ex: run_intra.sh 1 20(sleep ms) 1024(msg size)...
- When testing 1-n or n-n, code should be modified to choose the right topic name, since now the topic name is prefix0, prefix1, prefix2, while in 1-n should all be prefix0.

# distribtion
- talker(sleep ms, msg size); listen_talker(); listener(). 
- talker parameters: 1: sleep time in ms, the sleep time=the param, you should set talker's sleep time in when run talker node; 2: msg size; 
- Start the talker node with the command: ros2 run simple_distrib 1(sleep ms) 1048576(msg size), and start listen_talker with command: ros2 run simple_distrib listen_talker, and listener with command: ros2 run simple_distrib listener
- To start the distribution exp, you should shart talker and listener nodes on one machine, and start listen_talker on aonther machine, and the two machines must be in one network. If you want to test distribute codes only in one machine, you'd better close the machine network first, and then start all three nodes in it. 

# DDS
- the default communication method is rtps，you can change the qos config in the code，detail in [pre-set config](https://github.com/ros2/rmw/blob/master/rmw/include/rmw/qos_profiles.h) and [How to set in ROS2](https://docs.ros2.org/latest/api/rclcpp/classrclcpp_1_1QoS.html#details)
- talker's params: 1:sleep time in ms; 2: msg size; 3: topic name
- listener's params: 1:topic name, if the topic number > 1, the topic will be topic name+'0',+'1'...; 2:topic number, > 1 only when testing data fusion, and you need to change the code; 3: file name prefix
- run_dds.sh params: 1: index; 2: sleep ms; 3: msg size; 4: topic number of listener; 5: talker number; 6: listener number

# Notice：
- once change the data format in msg，please delete the ros2/build and then colcon build，or the format change would make no difference
