# param: 1: how many subscribers; 2: how many publishers; 3: publisher sleep ms(1000/rate); 4: msg content size;
for sleep_ms in 20 #1000 100 20 10 2
do
let rate_hz=1000/$sleep_ms
log_dir='/ros_test/log/detect_s'
rm -rf $log_dir
mkdir $log_dir

rm /ros_test/log/test/tmp/*

rosrun detect_s Line c1 l1 __name:=l_1 & 
rosrun detect_s YoloDetect c1 y1 __name:=y_1 & 
rosrun detect_s TrackerRos c1 y1 t1 __name:=t_1 & 
rosrun detect_s FusionMiddle l1 y1 t1 fm1 __name:=fm_1 & 
rosrun detect_s CameraTimer c1 example.jpg __name:=c_1 & 

# 2 topics example: rosrun simple_s listener c 2 __name:=s$i &
done
sleep 100
# publishers must be closed before kill subscribers
#rosnode kill c_1
#rosnode kill l_1
#rosnode kill y_1
#rosnode kill t_1
#rosnode kill fm_1
#rosnode kill s0
kill -s SIGINT `ps x | grep CameraTimer | grep -v grep | awk '{print $1}'`
kill -s SIGINT `ps x | grep Line | grep -v grep | awk '{print $1}'`
kill -s SIGINT `ps x | grep YoloDetect | grep -v grep | awk '{print $1}'`
kill -s SIGINT `ps x | grep TrackerRos | grep -v grep | awk '{print $1}'`
kill -s SIGINT `ps x | grep FusionMiddle | grep -v grep | awk '{print $1}'`
sleep 5
filesname=$(ls "/ros_test/log/test/tmp")
for f in $filesname
do
	echo $f
	mv /ros_test/log/test/tmp/$f $log_dir/$f".csv"
done
