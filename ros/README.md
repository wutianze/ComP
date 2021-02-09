## init environment
- source /opt/ros/melodic/setup.bash
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
