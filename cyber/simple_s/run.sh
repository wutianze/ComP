# 1:size 2:number of subscribers 3: launch file name and conf file name(should be the same as process_name in launch file)

kill -9 `ps -A|grep java |awk '{print $1}'` 
#rm /apollo/data/log/test/multi/*

# copy the scheduler configure file to the dir
cp /apollo/cyber/AD_Middle_Test/cyber/simple_s/$3*.conf /apollo/cyber/conf/ 

# write the param txt, size and channel
for((i=0;i<$2;i++));
do
echo $1\ c$i > /apollo/params$i.txt 
done

# launch
cyber_launch start /apollo/cyber/AD_Middle_Test/cyber/simple_s/$3.launch & #./bazel-bin/cyber/AD_Middle_Test/cyber/intra_no_component $2 &
sleep 150
cyber_launch stop
filesname=$(ls "/apollo/data/log/test/multi")
for f in $filesname
do
	echo $f
	cat /apollo/data/log/test/multi/$f
done
