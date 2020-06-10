# param: 1: channel_name; 2: publisher sleep ms(1000/rate); 3: msg content size; 4: how many topics in one subscriber; 5: how many publishers; 6: how many subscribers
for sleep_ms in 20 #1000 100 20 10 2
do
let rate_hz=1000/$sleep_ms
echo $rate_hz
log_dir='/ros2_test/log/test/1t4_'$rate_hz'hz_4c_2i'
mkdir $log_dir
for ss in 4194304 #1024 8192 16384 65536 262144 524288 1048576 2097152 4194304 8388608
do
rm /ros2_test/log/test/tmp/*
#ros2 run simple_s intra_pipe $1 $2 $3 $4 $5 $6 & #--ros-args --remap __name:=intra_test & # listen to c$i, if listen to the same topic, change to c; how many topics one subscriber listens to(!!!remember to change)
ros2 run simple_s intra_pipe out $sleep_ms $ss 1 1 4 & #--ros-args --remap __name:=intra_test & # listen to c$i, if listen to the same topic, change to c; how many topics one subscriber listens to(!!!remember to change)
# 2 topics example: rosrun simple_s listener c 2 __name:=s$i &
sleep 300
kill -s SIGINT `ps x | grep intra_pipe | grep -v grep | awk '{print $1}'`
sleep 10
filesname=$(ls "/ros2_test/log/test/tmp")
for f in $filesname
do
echo $f
mv /ros2_test/log/test/tmp/$f $log_dir/$f"_1t4_"$rate_hz"hz_4_2i.csv"
done
done
done
