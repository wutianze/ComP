# 1:size 2:number of subscribers 3: launch file name and conf file name(should be the same as process_name in launch file)
# ex. ./run.sh 1 1 1t1_p
kill -9 `ps -A|grep java |awk '{print $1}'` 
#log_dir="/apollo/data/log/test/1t1_50hz_1c_1t_cpucore_cs_p"
#mkdir $log_dir
for ss in 4194304 #1024 8192 16384 65536 262144 524288 1048576 2097152 4194304 8388608
#for ss in 8388608
do
rm -r /apollo/data/log/test/tmp
mkdir /apollo/data/log/test/tmp

# copy the scheduler configure file to the dir
cp /apollo/cyber/AD_Middle_Test/cyber/simple_s/p1.conf /apollo/cyber/conf/ 
cp /apollo/cyber/AD_Middle_Test/cyber/simple_s/p2.conf /apollo/cyber/conf/ 

# write the param txt, size and channel
for((i=0;i<$2;i++));
do
echo $ss\ c$i > /apollo/params$i.txt 
done

# launch
cyber_launch start /apollo/cyber/AD_Middle_Test/cyber/simple_s/$3.launch & #./bazel-bin/cyber/AD_Middle_Test/cyber/intra_no_component $2 &
sleep 300
cyber_launch stop
sleep 20
filesname=$(ls "/apollo/data/log/test/tmp")
for f in $filesname
do
	echo $f
	#cat /apollo/data/log/test/tmp/$f
	#mv /apollo/data/log/test/tmp/$f $log_dir/$ss"_1t1_50_1_1_400_cs_p.csv"
done
done
