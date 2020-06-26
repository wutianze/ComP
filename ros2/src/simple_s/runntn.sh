# param: 1: how many subscribers; 2: how many publishers; 3: publisher sleep ms(1000/rate); 4: msg content size;
for sleep_ms in 20 #1000 100 20 10 2
do
let rate_hz=1000/$sleep_ms
echo $rate_hz
ps_n=4
log_dir='/ros2_test/log/test/'$ps_n't'$ps_n'_8_2r'
mkdir $log_dir
for ss in 4194304 #1024 8192 16384 65536 262144 524288 1048576 2097152 4194304 8388608
do
rm /ros2_test/log/test/tmp/*

for((i=0;i<$ps_n;i++));
do
RMW_IMPLEMENTATION=rmw_fastrtps_cpp ros2 run simple_s listener c$i 1 c_$i --ros-args --remap __name:=c$i & # listen to c$i, if listen to the same topic, change to c; how many topics one subscriber listens to(!!!remember to change)
# 2 topics example: rosrun simple_s listener c 2 __name:=s$i &
done
sleep 5
for((i=0;i<$ps_n;i++));
do
RMW_IMPLEMENTATION=rmw_fastrtps_cpp ros2 run simple_s talker $sleep_ms $ss c$i --ros-args --remap __name:=p$i & # 1: sleep ms; 2: msg size 3: channel name prefix c[number]
done

sleep 300
# publishers must be closed before kill subscribers
#for((i=0;i<$2;i++));
#do
#rosnode kill p$i
#done
#sleep 3
#rosnode kill s0
kill -s SIGINT `ps x | grep listener | grep -v grep | awk '{print $1}'`
kill -s SIGINT `ps x | grep talker | grep -v grep | awk '{print $1}'`
filesname=$(ls "/ros2_test/log/test/tmp")
for f in $filesname
do
echo $f
mv /ros2_test/log/test/tmp/$f $log_dir/$f'_'$ps_n't'$ps_n"_8_2r.csv"
done
done
done
