# 1: index; 2. sleep in ms; 3. msg size; 4. topic number each subscriber listens to; 5. number of subscriber; 6. number of publisher
rosnode kill -a
sleep 5

log_dir="/ros_test/log/2021/$1"
rm -rf $log_dir
mkdir $log_dir

rm /ros_test/log/test/tmp/*
rosrun nodelet nodelet manager __name:=nodelet_manager &
#sleep 5
for((i=0;i<$5;i++));
do
rosrun nodelet nodelet load nodelet_s/B nodelet_manager __name:=B$i _node_name:=c$i _channel_name:=/A0/out _channel_num:=$4 &
done

for((i=0;i<$6;i++));
do
rosrun nodelet nodelet load nodelet_s/A nodelet_manager __name:=A$i _sleep_ms:=$2 _ssize:=$3 _channel_name:=out & # channel topic is /__name/channel_name
done

# run time
sleep 200
kill -s SIGINT `ps x | grep nodelet | grep -v grep | awk '{print $1}'`
#rosnode kill -a
sleep 10
filesname=$(ls "/ros_test/log/test/tmp")
for f in $filesname
do
	echo $f
	mv /ros_test/log/test/tmp/$f $log_dir/$1.csv # for 1t1
	#mv /ros_test/log/test/tmp/$f $log_dir/$f"_8t8_rn.csv"
done

kill -9 `ps x | grep nodelet | grep -v grep | awk '{print $1}'` # kill nodelet manager
