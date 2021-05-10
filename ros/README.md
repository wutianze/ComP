## init environment
- source /opt/ros/melodic/setup.bash
- Put AD_Middle_Test in /ros_test/AD_Middle_Test
- in AD_Middle_Test/ros, run `. install/setup.bash`
- How to compile: in ros/, run `catkin_make`
- Before running, open another terminal and run `roscore`

## nodelet
- In src/nodelet_s，A is publisher, B is subscriber
- A's params: sleep_ms(sleep intervel); ssize(msg size); channel_name(topic name), here the real topic name will be /\_\_name/channel_name, for ex, if channel_name is "out", the name of the node is A0, then the topic name will be /A0/out
- B's params: channel_name(topic name), here the name should be the real name like /A0/out; ~~channel_num(the number of topics each B subscribes)~~; node_name(node name)
- Note that we didn't use nodelet to test N-1 scenario, but you can uncommend some lines in B.cpp to enable the function. So the channel_num is useless now.
- run.sh params: 1: index; 2: sleep in ms; 3: msg size; 4: number of topic each B subscribes, should be 1; 5: number of B; 6: number of A. Change the topic name for each A or B manually for 1t1/1tn/ntn...
- If meet the err:Skipped loading plugin with error: XML Document..., cp nodelet/plugin to the location shown in err msg.

# distribtion
- talker(sleep ms, msg size); listen_talker(); listener(). 
- talker parameters: 1: sleep time in ms, the sleep time=the param, you should set talker's sleep time in when run talker node; 2: msg size; 
- Start the talker node with the command: rosrun simple_distrib 1(sleep ms) 1048576(msg size), and start listen_talker with command: rosrun simple_distrib listener, and listen_talker with command: rosrun simple_distrib listen_talker
- To start the distribution exp, you must set the same ROS_MASTER_URI on two machines. Also you should run talker and listener nodes on one machine, and listen_talker on aonther machine, while the two machines must be in one network. If you want to test distribute codes only in one machine, you should remove the ROS_MASTER_URI setting and then start all three nodes in the machine; 

## TCPROS & UDPROS
- talker's params: 1: sleep time in ms; 2: msg size; 3: topic name;
- listener's params: 1: topic name; 2: number of topic one listener subscribes, usually be 1;
- In 1-n or n-1 or n-n scenarios, should change the run.sh to modify topic name etc.
- run.sh's params: 1: index; 2: sleep time in ms; 3: msg size; 4: number of topic on listener subscribes; 5: number of listeners; 6: number of talkers
