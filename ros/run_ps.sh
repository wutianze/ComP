rm /ros_test/log/multi/*
for((i=0;i<$1;i++));
do
rosrun pub_sub listener c$i $i __name:=n_$i &
done
sleep 5
for((i=0;i<$1;i++));
do
./devel/lib/pub_sub/talker $2 $3 $4 200 c$i 1 __name:=p_$i & # 1: rate 2: concurrency 3: msg size 4: run time in second 5: channel name prefix c[number] 6: number of publisher
done
#for((i=0;i<$1;i++))
#do
#./devel/lib/pub_sub/talker 10 1 $2 150 c 1 
#done
#./run_ps_tal.sh $2 c1 $1
echo $1
sleep 200
rosnode kill -a
sleep 3
echo rate: $2 concurrency: $3 msg size: $4
#python3 handleDir.py $4 $2 $3 ros_record.csv
#mv /ros_test/log/tmp /ros_test/log/$1_txt
