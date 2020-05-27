# param: 1: channel_name; 2: publisher sleep ms(1000/rate); 3: msg content size; 4: how many topics in one subscriber; 5: how many publishers; 6: how many subscribers
ros2 run simple_s intra_pipe $1 $2 $3 $4 $5 $6 & #--ros-args --remap __name:=intra_test & # listen to c$i, if listen to the same topic, change to c; how many topics one subscriber listens to(!!!remember to change)
# 2 topics example: rosrun simple_s listener c 2 __name:=s$i &
sleep 20

kill -s SIGINT `ps x | grep intra_pipe | grep -v grep | awk '{print $1}'`

