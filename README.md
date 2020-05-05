# AD_Middle_Test
The test code for apollo cyber and ros.
Now, just focus on `cyber/` and `ros/`. 
`apps` contains detect algorithms includes yolo, kcf, line detect etc. You may need to recompile it in cyber & ros docker container. It is managed by cmake.

# Environment:
[opencv3.4.10 and opencv_contrib 3.4.10](https://blog.csdn.net/YuYunTan/article/details/85017065)

# Notice:
cyber and ros should run by root.

# Cyber， [官方文档汇总](https://github.com/ApolloAuto/apollo/tree/master/cyber)
- 启动容器，[官方链接](https://github.com/ApolloAuto/apollo/blob/master/docs/cyber/CyberRT_Docker.md)：
1. clone the git project
2. checkout to r5.5.0(not sure if necessary)
3. sudo groupadd docker, sudo usermod -aG docker $USER # this can make docker run without sudo, however when running the cyber script you may still need sudo
4. echo "export APOLLO_HOME=$(pwd)" >> ~/.bashrc && source ~/.bashrc
5. follow the doc of cyber to run docker/script/cyber_start.sh & cyber_into.sh
6. the build in cyber is ./apollo.sh build_cyber(must as root), remember not to use build since it will build other modules and will fail

- 进入cyber容器并初始化环境：
run in root: docker exec -u root -it [container num] /bin/bash
source /apollo/cyber/setup.bash（import, or you cannot use cyber_* commands）

- 创建component等，[官方文档](https://github.com/ApolloAuto/apollo/blob/master/docs/cyber/CyberRT_Quick_Start.md)

- 具体运行见 Cyber实操.md

- [cyber原理学习](https://blog.csdn.net/qq_25762163/category_9599333.html)
