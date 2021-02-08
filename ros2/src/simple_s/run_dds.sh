# params: 1: index; 2: sleep ms; 3: msg size; 4: topic number of listener; 5: talker number; 6: listener number
log_dir="/ros2_test/log/2021/$1"
rm -rf $log_dir
mkdir $log_dir
rm /ros2_test/log/test/tmp/*

for((i=0;i<$6;i++));
do
RMW_IMPLEMENTATION=rmw_fastrtps_cpp ros2 run simple_s listener c 1 c_$i --ros-args --remap __name:=c$i & # listen to c$i, if listen to the same topic, change to c; how many topics one subscriber listens to(!!!remember to change)
done
sleep 5
for((i=0;i<$5;i++));
do
RMW_IMPLEMENTATION=rmw_fastrtps_cpp ros2 run simple_s talker $2 $3 c --ros-args --remap __name:=p$i & # 1: sleep ms; 2: msg size 3: channel name prefix c[number]
done

sleep 200
kill -s SIGINT `ps x | grep listener | grep -v grep | awk '{print $1}'`
kill -s SIGINT `ps x | grep talker | grep -v grep | awk '{print $1}'`
filesname=$(ls "/ros2_test/log/test/tmp")
for f in $filesname
do
echo $f
mv /ros2_test/log/test/tmp/$f $log_dir/$1.csv
#mv /ros2_test/log/test/tmp/$f $log_dir/$f"_1t8_2_2r.csv"
done
