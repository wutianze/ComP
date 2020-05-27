# Test
- 位于`ros2/src/simple_s`中，运行run.sh [subscriber num] [publisher num] [publish sleep ms] [msg content size]，如果需要一个subscriber接收多个topic的消息（目前不改代码支持2个），可以修改run.sh中listener启动参数来指定。最终结果会打印在屏幕上
- 默认的通信方式是rtps，可以在源码中修改qos配置来调整策略，具体qos选择见[链接](https://github.com/ros2/rmw/blob/master/rmw/include/rmw/qos_profiles.h)
