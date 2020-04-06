echo -e "hz: $2\ncon: $3" > src/example_pkg/size.yaml
roslaunch example_pkg run.launch
#sleep 5
#rostopic pub /A/start std_msgs/String start
echo $1
python3 handle.py
mv /ros_test/log/tmp /ros_test/log/$1_txt
