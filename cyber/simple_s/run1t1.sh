# ex. ./run.sh 1t1_t 2 8388608  //1t1 index size
kill -9 `ps -A|grep java |awk '{print $1}'` 
log_dir="/apollo/data/log/2021/$2"
rm -rf $log_dir
mkdir $log_dir
# 4194304 1024 8192 16384 65536 262144 524288 1048576 2097152 4194304 8388608
rm -r /apollo/data/log/test/tmp
mkdir /apollo/data/log/test/tmp

# copy the scheduler configure file to the dir
cp /apollo/cyber/AD_Middle_Test/cyber/simple_s/$1*.conf /apollo/cyber/conf/ 

# write the param txt, size and channel
echo $3\ c0 > /apollo/params0.txt 

# launch
cyber_launch start /apollo/cyber/AD_Middle_Test/cyber/simple_s/$1*.launch & #./bazel-bin/cyber/AD_Middle_Test/cyber/intra_no_component $2 &
sleep 200
cyber_launch stop
sleep 20
cp /apollo/data/log/test/tmp/c_0_0 $log_dir/$2.csv
