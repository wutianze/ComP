# param 1: hz; 2: ssize, msg size/byte 3: run_time/s; 4: sub num; 5: pub num; 6: one sub subscribes how many topics
# the channel name must be modified manually
for sleep_ms in 20 #1000 100 20 10 2
do
let rate_hz=1000/$sleep_ms
echo $rate_hz
log_dir='/ros_test/log/1t2_'$rate_hz'hz_4c_rn'
mkdir $log_dir

for ss in 4194304 #1024 8192 16384 65536 262144 524288 1048576 2097152 4194304 8388608
do
rm /ros_test/log/test/tmp/*
rosrun nodelet nodelet manager __name:=nodelet_manager &
for((i=0;i<2;i++));
do
rosrun nodelet nodelet load nodelet_s/B nodelet_manager __name:=B$i _node_name:=c$i _channel_name:=out _channel_num:=1 &
done
#sleep 5

for((i=0;i<1;i++));
do
rosrun nodelet nodelet load nodelet_s/A nodelet_manager __name:=A$i _hz:=$rate_hz _ssize:=$ss _channel_name:=out & # channel topic is /__name/channel_name
done

# run time
sleep 300
#rosnode kill -a
kill -s SIGINT `ps x | grep nodelet | grep -v grep | awk '{print $1}'`
sleep 5
filesname=$(ls "/ros_test/log/test/tmp")
for f in $filesname
do
	echo $f
	mv /ros_test/log/test/tmp/$f $log_dir/$f"_1t2_"$rate_hz"hz_4_rn.csv"
done

done
done
