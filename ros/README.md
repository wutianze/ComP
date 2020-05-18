# Test
## ROS普通模式简单测试
- 在`AD_Middle_Test/ros/src/simple_s`中，运行./run.sh [subscriber节点数量] [publisher节点数量] [发送间隔/ms] [发送的msg大小/byte]；运行后的结果会在屏幕上打印出来，并会保存在`/ros_test/log/multi/`中
- 需要做N to 1实验时，需要调整listener的代码手动添加msg数量（sync好像有最大数量限制），并且根据注释修改run.sh


For non-nodelet test ./run_test.sh AD 1024 # first is save file name, second is msg size
For nodelet test ./run_nodelet.sh AD 1024, after the process finish you should use Ctrl-C to stop and then the result will show
For pub_sub test ./run_ps.sh AD, another terminal:./devel/lib/pub_sub talker 10(rate/hz) 100(concurrent number) 1024(str size) 100(run time/s)
For pub_sub nodelet test ./run_nodelet_ps.sh AD 1(hz) 10(con)
