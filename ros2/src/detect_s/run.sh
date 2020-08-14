# param: 1: how many subscribers; 2: how many publishers; 3: publisher sleep ms(1000/rate); 4: msg content size;
log_dir='/ros2_test/log/test/detect_s'
rm -rf $log_dir
mkdir $log_dir
rm /ros2_test/log/test/tmp/*
RMW_IMPLEMENTATION=rmw_fastrtps_cpp ros2 run detect_s cameraTimer 100 c1 --ros-args --remap __name:=c1 & # listen to c$i, if listen to the same topic, change to c; how many topics one subscriber listens to(!!!remember to change)
RMW_IMPLEMENTATION=rmw_fastrtps_cpp ros2 run detect_s yoloDetect c1 y1 y1 --ros-args --remap __name:=y1 &
RMW_IMPLEMENTATION=rmw_fastrtps_cpp ros2 run detect_s line c1 l1 l1 --ros-args --remap __name:=l1 &
RMW_IMPLEMENTATION=rmw_fastrtps_cpp ros2 run detect_s trackerRos2 c1 y1 t1 t1 --ros-args --remap __name:=t1 &
RMW_IMPLEMENTATION=rmw_fastrtps_cpp ros2 run detect_s fusionMiddle l1 y1 t1 fm1 fm1 --ros-args --remap __name:=fm1 &
sleep 30
kill -s SIGINT `ps x | grep c1 | grep -v grep | awk '{print $1}'`
kill -s SIGINT `ps x | grep y1 | grep -v grep | awk '{print $1}'`
kill -s SIGINT `ps x | grep l1 | grep -v grep | awk '{print $1}'`
kill -s SIGINT `ps x | grep t1 | grep -v grep | awk '{print $1}'`
kill -s SIGINT `ps x | grep fm1 | grep -v grep | awk '{print $1}'`
sleep 10
filesname=$(ls "/ros2_test/log/test/tmp")
for f in $filesname
do
echo $f
mv /ros2_test/log/test/tmp/$f $log_dir/$f.csv
done
