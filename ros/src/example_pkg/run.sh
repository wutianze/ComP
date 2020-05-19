# param 1: hz; 2: ssize, msg size/byte 3: run_time/s; 4: sub num; 5: pub num; 6: one sub subscribes how many topics
# the channel name must be modified manually
rm /ros_test/log/multi/*
rosrun nodelet nodelet manager __name:=nodelet_manager &
for((i=0;i<$4;i++));
do
rosrun nodelet nodelet load example_pkg/B nodelet_manager __name:=B$i _channel_name:=out _channel_num:=$6 &
done
sleep 5

for((i=0;i<$5;i++));
do
rosrun nodelet nodelet load example_pkg/A nodelet_manager __name:=A$i _hz:=$1 _ssize:=$2 _channel_name:=out & # channel topic is /__name/channel_name
done
sleep 20
#for((i=0;i<$4;i++));
#do
#rosrun nodelet nodelet unload /B$i nodelet_manager
#done

# why subscriber need kill is because it creates a new thread.
#for((i=0;i<$5;i++));
#do
#rosrun nodelet nodelet unload /A$i nodelet_manager
#done
sleep 10
rosnode kill -a

#echo "value: $2" > src/example_pkg/size.yaml
#roslaunch example_pkg run.launch &
#sleep 40
#rostopic pub /A/start std_msgs/String start
#echo $1
#python3 handleDir.py
#mv /ros_test/log/tmp /ros_test/log/$1_txt
