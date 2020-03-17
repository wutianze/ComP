kill -9 `ps -A|grep java |awk '{print $1}'`
cyber_launch start cyber/AD_Middle_Test/cyber/intra_component/intra_shm.launch & ./bazel-bin/cyber/AD_Middle_Test/cyber/intra_no_component &
sleep 150
cyber_launch stop
echo $1
python3 /apollo/cyber/AD_Middle_Test/cyber/data/handle.py
mv data/log/test/intra.txt data/log/test/$1_txt
