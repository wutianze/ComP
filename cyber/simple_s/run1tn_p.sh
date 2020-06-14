# 1:size 2:number of subscribers 3: launch file name and conf file name(should be the same as process_name in launch file)
# ex. ./run.sh 1 1 1t1
kill -9 `ps -A|grep java |awk '{print $1}'` 
log_dir="/apollo/data/log/test/config_choreography_1t8_cs"
rm -rf log_dir
mkdir $log_dir
for ss in 4194304 #1024 8192 16384 65536 262144 524288 1048576 2097152 4194304 8388608
do
rm -r /apollo/data/log/test/tmp
mkdir /apollo/data/log/test/tmp

# copy the scheduler configure file to the dir
cp /apollo/cyber/AD_Middle_Test/cyber/simple_s/1tn*.conf /apollo/cyber/conf/ 

# write the param txt, size and channel
for((i=0;i<8;i++));
do
echo $ss\ c$i > /apollo/params$i.txt 
done

# launch
cyber_launch start /apollo/cyber/AD_Middle_Test/cyber/simple_s/1tn_p.launch & #./bazel-bin/cyber/AD_Middle_Test/cyber/intra_no_component $2 &
sleep 300
cyber_launch stop
sleep 20
filesname=$(ls "/apollo/data/log/test/tmp")
for f in $filesname
do
	echo $f
	#cat /apollo/data/log/test/tmp/$f
	mv /apollo/data/log/test/tmp/$f $log_dir/$f"_1t8_cs.csv"
done
done
