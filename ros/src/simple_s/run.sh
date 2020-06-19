# param: 1: how many subscribers; 2: how many publishers; 3: publisher sleep ms(1000/rate); 4: msg content size;

for sleep_ms in 20 #1000 100 20 10 2
do
let rate_hz=1000/$sleep_ms
log_dir='/ros_test/log/4t4_rt'
mkdir $log_dir

for ss in 4194304 #1024 8192 16384 65536 262144 524288 1048576 2097152 4194304 8388608
do
echo rate_hz:$rate_hz
echo msg_size:$ss
rm /ros_test/log/test/tmp/*
for((i=0;i<4;i++));
do
rosrun simple_s listener c$i 1 __name:=c_$i & # listen to c$i, if listen to the same topic, change to c; how many topics one subscriber listens to
# 2 topics example: rosrun simple_s listener c 2 __name:=s$i &
done
sleep 5
for((i=0;i<4;i++));
do
rosrun simple_s talker $sleep_ms $ss c$i __name:=p$i & # 1: sleep ms; 2: msg size 3: channel name
done

echo $1
sleep 300
# publishers must be closed before kill subscribers
for((i=0;i<1;i++));
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
	mv /ros_test/log/test/tmp/$f $log_dir/$f"_4t4_rt.csv"
done
done
done
