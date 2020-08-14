# 环境配置
- source /opt/ros/xx/setup.bash
- cd /ros2_test/AD_Middle_Test/ros2, . install/setup.bash
- 可能遇到.so找不到的问题：修改/etc/ld.so.conf.d/opencv.conf，加入.so所在路径比如：/usr/local/lib/（可以用find / -name "xxx.so"找）然后ldconfig -v
- ros2中的apps里生成的libxx.so需要放到/lib或/usr/lib中

# Test
- 位于`ros2/src/simple_s`中，运行run.sh [subscriber num] [publisher num] [publish sleep ms] [msg content size]，如果需要一个subscriber接收多个topic的消息（目前不改代码支持2个），可以修改run.sh中listener启动参数来指定。最终结果会打印在屏幕上
- 默认的通信方式是rtps，可以在源码中修改qos配置来调整策略，具体qos选择见[链接](https://github.com/ros2/rmw/blob/master/rmw/include/rmw/qos_profiles.h)

# 注意事项：
- 一旦修改了msg里的消息格式，需要删除ros2目录下的build文件夹再重新colcon build，不然msg里定义无效
