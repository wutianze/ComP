rosrun beginner_tutorials add_two_ints_client $2
echo $1
python3 handle.py
mv /ros_test/log/tmp /ros_test/log/$1_txt
