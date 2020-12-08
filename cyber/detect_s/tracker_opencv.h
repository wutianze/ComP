#ifndef TRACKER_OPENCV
#define TRACKER_OPENCV
#include <opencv2/opencv.hpp>
#include <opencv2/tracking.hpp>
#include <opencv2/core/ocl.hpp>
using namespace cv;
using namespace std;
class CvTracker{
	public:
void tracker_create(string trackerType);
void tracker_init(Mat& frame, Rect2d& bbox);
bool track_test(Mat& frame, Rect2d& bbox);

Ptr<Tracker> tracker;
};
//void imwrite_cv(string,Mat&);
//Mat imread_cv(string);
#endif
