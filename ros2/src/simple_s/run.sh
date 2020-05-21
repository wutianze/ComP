# param: 1: how many subscribers; 2: how many publishers; 3: publisher sleep ms(1000/rate); 4: msg content size;
for((i=0;i<$1;i++));
do
RMW_IMPLEMENTATION=rmw_fastrtps_cpp ros2 run simple_s listener c 2 --ros-args --remap __name:=s$i & # listen to c$i, if listen to the same topic, change to c; how many topics one subscriber listens to

# 2 topics example: rosrun simple_s listener c 2 __name:=s$i &
done
sleep 5
for((i=0;i<$2;i++));
do
ros2 run simple_s talker $3 $4 c$i --ros-args --remap __name:=p$i & # 1: sleep ms; 2: msg size 3: channel name prefix c[number]
done

sleep 20


# publishers must be closed before kill subscribers
#for((i=0;i<$2;i++));
#do
#rosnode kill p$i
#done
#sleep 3
#rosnode kill s0
kill -s SIGINT `ps x | grep listener | grep -v grep | awk '{print $1}'`
kill -s SIGINT `ps x | grep talker | grep -v grep | awk '{print $1}'`
#filesname=$(ls "/ros_test/log/multi")
#for f in $filesname
#do
#	echo $f
#	#cat /ros_test/log/multi/$f
#done
