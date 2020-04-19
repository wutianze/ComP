#ifndef OPENCV_UTIL
#define OPENCV_UTIL
#include <opencv2/opencv.hpp>
#include <opencv2/tracking.hpp>
#include <opencv2/core/ocl.hpp>
using namespace cv;
using namespace std;
void imwrite_cv(string,Mat&);
Mat imread_cv(string);
VideoCapture video_cv(string);
#endif
