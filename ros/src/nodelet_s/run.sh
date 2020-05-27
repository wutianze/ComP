# param 1: hz; 2: ssize, msg size/byte 3: run_time/s; 4: sub num; 5: pub num; 6: one sub subscribes how many topics
# the channel name must be modified manually
rm /ros_test/log/multi/*
rosrun nodelet nodelet manager __name:=nodelet_manager &
for((i=0;i<$4;i++));
do
rosrun nodelet nodelet load nodelet_s/B nodelet_manager __name:=B$i _channel_name:=out _channel_num:=$6 &
done
sleep 5

for((i=0;i<$5;i++));
do
rosrun nodelet nodelet load nodelet_s/A nodelet_manager __name:=A$i _hz:=$1 _ssize:=$2 _channel_name:=out & # channel topic is /__name/channel_name
done

# run time
sleep $3
#for((i=0;i<$4;i++));
#do
#rosrun nodelet nodelet unload /B$i nodelet_manager
#done

# why subscriber need kill is because it creates a new thread.
#for((i=0;i<$5;i++));
#do
#rosrun nodelet nodelet unload /A$i nodelet_manager
#done
rosnode kill -a

