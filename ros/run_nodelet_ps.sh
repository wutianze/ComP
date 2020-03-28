#rosrun nodelet nodelet manager __name:=nodelet_manager
#rosrun nodelet nodelet load example_pkg/A nodelet_manager __name:=A A/in:=B/out _value:=$2
#rosrun nodelet nodelet load example_pkg/B nodelet_manager __name:=B B/in:=A/out _value:=$2
echo -e "hz: $2\ncon: $3" > src/example_pkg/size.yaml
roslaunch example_pkg run.launch &
sleep 5
rostopic pub /A/start std_msgs/String start
echo $1
python3 handle.py
mv /ros_test/log/tmp /ros_test/log/$1_txt
