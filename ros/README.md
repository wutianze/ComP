# Test
## ROS普通模式简单测试
- 在`AD_Middle_Test/ros/src/simple_s`中，运行./run.sh [subscriber节点数量] [publisher节点数量] [发送间隔/ms] [发送的msg大小/byte]；运行后的结果会在屏幕上打印出来，并会保存在`/ros_test/log/multi/`中
- 需要做N to 1实验时，需要调整listener的代码手动添加msg数量（sync好像有最大数量限制），并且根据注释修改run.sh

## nodelet测试
- 在`AD_Middle_Test/ros/src/nodelet_s`中，运行./run.sh [发送hz] [发送的msg大小/byte] [运行时间] [subscriber的数量] [publisher的数量] [一个subscriber订阅几个消息]；运行结果会直接显示在屏幕上，不保存到文件（如果需要可以参考普通模式在代码里加）
- 做N to 1实验时，需要手动在`nodelet_s/src/B.cc`中添加回调函数，并且修改对应的run.sh
- publisher发送消息的topic格式为/A[id]/[channel_name], subscriber接受消息时如果是单个publisher则为/A0/[channel_name]，多个节点需要在B.cc代码里指定一下
