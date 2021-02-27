# 1: index 2: sleep_ms 3: msg size 4: number of topic a subscriber subscribes 5: number of Producer 6: number of Consumer
log_dir="/ros2_test/log/2021/$1"
rm -rf $log_dir
mkdir $log_dir
rm /ros2_test/log/test/tmp/*
ros2 run simple_s intra_pipe out $2 $3 $4 $5 $6 &
sleep 200
kill -s SIGINT `ps x | grep intra_pipe | grep -v grep | awk '{print $1}'`
sleep 15
filesname=$(ls "/ros2_test/log/test/tmp")
for f in $filesname
do
echo $f
mv /ros2_test/log/test/tmp/$f $log_dir/$1.csv # for 1t1 test, just one log file
#mv /ros2_test/log/test/tmp/$f $log_dir/$f.csv
done
