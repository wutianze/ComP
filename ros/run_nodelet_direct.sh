rm /ros_test/log/multi/*
rosnode kill -a
sleep 5
rosrun nodelet nodelet manager __name:=nodelet_manager &
for((i=0;i<$1;i++));
do
rosrun nodelet nodelet load example_pkg/B nodelet_manager __name:=B$i _channel_name:=out$i _record:=B$i &
done
sleep 5
rosrun nodelet nodelet load example_pkg/A nodelet_manager __name:=A _hz:=100 _con:=1 _num:=$1 _ssize:=$2
#echo "value: $2" > src/example_pkg/size.yaml
#roslaunch example_pkg run.launch &
#sleep 40
#rostopic pub /A/start std_msgs/String start
#echo $1
python3 handleDir.py
#mv /ros_test/log/tmp /ros_test/log/$1_txt
