./devel/lib/pub_sub/listener
echo $1
python3 handle.py
mv /ros_test/log/tmp /ros_test/log/$1_txt
