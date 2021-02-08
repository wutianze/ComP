# environment init
- source /opt/ros/xx/setup.bash
- cd /ros2_test/AD_Middle_Test/ros2
- . install/setup.bash
- if error says couldn't find xx.so：change /etc/ld.so.conf.d/opencv.conf，add the address of xxx.so, for ex：/usr/local/lib/（can use `find / -name "xxx.so"`）, then ldconfig -v
- libxx.so generates in app dir should be put in /lib or /usr/lib

# intra
- Producer(the node's name, sleep ms, msg size, topic name); Consumer(node name & record file name prefix, topic name, topic number). If the topic number of Consumer > 1, it means the consumer will have to do data fusion, then the topic will be topic_name+'0', +'1'...
- intra_pipe parameters: 1: topic name prefix; 2: sleep time in ms, if pub_num==1, the sleep time=the param, if pub_num>1, this param is a index, you should change every Producer's sleep time in intra_pipe.cpp; 3: msg size; 4: topic number of Consumer(> 1 only when you want to test data fusion); 5: number of Producer; 6: number of Consumer
- run_intra.sh parameters: the first is index number, the other is same as intra_pipe's, for ex: run_intra.sh 1 20(sleep ms) 1024(msg size)...

# DDS
- the default communication method is rtps，you can change the qos config in the code，detail in [link](https://github.com/ros2/rmw/blob/master/rmw/include/rmw/qos_profiles.h)

# Notice：
- once change the data format in msg，please delete the ros2/build and then colcon build，or the format change would make no difference
