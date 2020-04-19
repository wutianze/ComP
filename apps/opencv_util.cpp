#include "opencv_util.h"
using namespace cv;
using namespace std;
void imwrite_cv(string name, Mat&img){
imwrite(name,img);
}
Mat imread_cv(string name){
return imread(name);
}
VideoCapture video_cv(string name){
return VideoCapture(name);
}
