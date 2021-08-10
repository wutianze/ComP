## 0 Before Initalizaiton
### 0.1 git apollo
```
cd
git clone https://github.com/ApolloAuto/apollo.git
sudo groupadd docker
sudo usermod -aG docker $USER 
echo "export APOLLO_HOME=$(pwd)" >> ~/.bashrc && source ~/.bashrc
cd apollo
checkout r6.0.0
```
### 0.2 download Ford data
```
cd ~/Downloads
wget https://ford-multi-av-seasonal.s3-us-west-2.amazonaws.com/Sample-Data.tar.gz
tar Sample-Data.tar.gz
cp Sample-Data/FL ~/apollo/data/
```
### 0.3 git AD_Middle_Test
```
cd /apollo/cyber
git clone https://github.com/wutianze/ComP.git
```

## 1. Initialization of apollo docker
```
cd /apollo/docker/script/ 
vim cyber_start.sh
```
add the following mount command 
```
-v /home/nvidia/apollo/data/FL:/apollo/data/FL
```
then
```
sudo ./cyber_start.sh
./cyber_into.sh
```

## 2. install opencv3.4.10
```
https://docs.google.com/document/d/1lJghwNzdLMojtDF3RYjH78rVNtAIBIgvzKDIUs3wmic/edit
```
we suggest you using the following complie command:
```
cmake -D CMAKE_BUILD_TYPE=Release -D CMAKE_INSTALL_PREFIX=/usr/local -D OPENCV_EXTRA_MODULES_PATH=../opencv_contrib/modules -DBUILD_opencv_ximgproc=OFF -DBUILD_opencv_xfeatures2d=OFF -DBUILD_opencv_waldboost_detector=OFF ..
```
## 3. Complie AD_Middle_Test apps
```
cd ComP/apps
mkdir build
cd build
cmake ..
make
```
And you can get three lib*.so files, copy them to the following three paths: /lib, /usr/lib and /apollo/cyber/ComP/cyber/detect_s/lib

## 4.install yolov3
```
cd /apollo
git clone https://github.com/pjreddie/darknet.git
git checkout yolov3
cd darknet
vim Makefile
```
revise
```
GPU=1
OPENCV=1
```
and for Jetson XAVIER, you should also comment out the following code 
```
ARCH= -gencode arch=compute_72,code=[sm_72,compute_72]
```
then
```
make
```
You will get the file libdarknet.so, copy it to the following three paths: /lib, /usr/lib and /apollo/cyber/ComP/cyber/detect_s/lib
download yolov3.weight and yolov3-tiny.weight
```
wget https://pjreddie.com/media/files/yolov3.weights
wget https://raw.githubusercontent.com/smarthomefans/darknet-test/master/yolov3-tiny.weights
```

## 5.init
```
source /apollo/cyber/setup.bash
vim ~/.bashrc
```
add
```
export PATH = "$PATH:/apollo/cyber/ComP/cyber/detect_s" 
```
then
```
source ~/.bashrc
```

## 6.Complie apollo
if needed,clean make files
```
bazel clean
```
make command:
```
bazel build //cyber/...
```
## 7.run
```
cyber_launch start /apollo/cyber/ComP/cyber/detect_s/detect_t.launch
```

## 8. docker container save and restart
### docker container save
```
sudo docker  ps
sudo docker commit [container ID] [new docker images name] 
```
### Start from saved docker image
```
vim /apollo/docker/script/cyber_start.sh
```
revise
```
change the {images name} to {new docker images name} in the docker run
```
