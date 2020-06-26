# param: 1: how many subscribers; 2: how many publishers; 3: publisher sleep ms(1000/rate); 4: msg content size;

for sleep_ms in 20 #1000 100 20 10 2
do
let rate_hz=1000/$sleep_ms
log_dir='/ros_test/log/4t1_100_50_20_10_rt'
rm -rf $log_dir
mkdir $log_dir

for ss in 4194304 #1024 8192 16384 65536 262144 524288 1048576 2097152 4194304 8388608
do
echo rate_hz:$rate_hz
echo msg_size:$ss
rm /ros_test/log/test/tmp/*
for((i=0;i<1;i++));
do
rosrun simple_s listener c 4 __name:=c_$i & # listen to c$i, if listen to the same topic, change to c; how many topics one subscriber listens to
# 2 topics example: rosrun simple_s listener c 2 __name:=s$i &
done
sleep 5
rosrun simple_s talker 10 $ss c0 __name:=p0 & # 1: sleep ms; 2: msg size 3: channel name
rosrun simple_s talker 20 $ss c1 __name:=p1 & # 1: sleep ms; 2: msg size 3: channel name
rosrun simple_s talker 50 $ss c2 __name:=p2 & # 1: sleep ms; 2: msg size 3: channel name
rosrun simple_s talker 100 $ss c3 __name:=p3 & # 1: sleep ms; 2: msg size 3: channel name

echo $1
sleep 300
# publishers must be closed before kill subscribers
for((i=0;i<4;i++));
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
	mv /ros_test/log/test/tmp/$f $log_dir/$f"_4t1_100_50_20_10_rt.csv"
done
done
done
