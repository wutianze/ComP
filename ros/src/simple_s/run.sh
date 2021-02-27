# params: 1: index; 2: sleep time in ms; 3: msg size; 4: number of topic on listener subscribes; 5: number of listeners; 6: number of talkers
log_dir="/ros_test/log/2021/$1"
rm -rf $log_dir
mkdir $log_dir

rm /ros_test/log/test/tmp/*
for((i=0;i<$5;i++));
do
rosrun simple_s listener c$i $4 __name:=c_$i & # listen to c$i, if listen to the same topic, change to c; how many topics one subscriber listens to
# 2 topics example: rosrun simple_s listener c 2 __name:=s$i &
done
sleep 5
for((i=0;i<$6;i++));
do
rosrun simple_s talker $2 $3 c$i __name:=p$i & # 1: sleep ms; 2: msg size 3: channel name
done

sleep 200
for((i=0;i<$6;i++));
do
rosnode kill p$i
done
sleep 3
#rosnode kill s0
kill -s SIGINT `ps x | grep listener | grep -v grep | awk '{print $1}'`
kill -s SIGINT `ps x | grep talker | grep -v grep | awk '{print $1}'`
sleep 5
filesname=$(ls "/ros_test/log/test/tmp")
for f in $filesname
do
	echo $f
	mv /ros_test/log/test/tmp/$f $log_dir/$1.csv
	#mv /ros_test/log/test/tmp/$f $log_dir/$f"_1t8_rti.csv"
done
