#ifndef LINE_DETECT
#define LINE_DETECT
#include <opencv2/opencv.hpp>
#include <iostream>
#include <cmath>

using namespace cv;
using namespace std;
void process(Mat &frame,Point*result);
void fitLines(Mat &image,Point*result);
#endif
