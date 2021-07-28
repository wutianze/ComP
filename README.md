# ComP
`cyber/`, `ros/` and `ros2/` contain code for different environment(middleware). It is recommended that the benchmark be run with root priviledge inside docker container. Detail guidances are provided in these directories.
`apps` contains detect algorithms includes yolo, kcf, line detect etc. You need to recompile them in cyber & ros docker container. It is managed by cmake.

# Libraries needed:
- opencv3.4.10, opencv_contrib 3.4.10, cv_bridge in ROS
- darknet(Yolo)

# Tips for users
- opencv_contrib install commands: `cmake -D CMAKE_BUILD_TYPE=Release -D CMAKE_INSTALL_PREFIX=/usr/local -D OPENCV_EXTRA_MODULES_PATH=../opencv_contrib/modules -DBUILD_opencv_ximgproc=OFF -DBUILD_opencv_xfeatures2d=OFF -DBUILD_opencv_waldboost_detector=OFF ..`
- [Understand Cyber in Chinese language](https://blog.csdn.net/qq_25762163/category_9599333.html)

# darknet：
- rm -rf build-release
- mkdir build-release
- cd build-release && cmake .. 
- make
- cp libdarknet.so to usr/lib or /lib
