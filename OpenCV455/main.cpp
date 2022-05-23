#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
int main(int argc, char** argv)
{
    Mat src = imread("1.jpg");
    namedWindow("test", WINDOW_NORMAL);
    imshow("test", src);
    waitKey(0);
    destroyAllWindows();
    return 0;
}