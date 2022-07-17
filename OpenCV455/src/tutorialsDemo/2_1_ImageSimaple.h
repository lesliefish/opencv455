#pragma once
#include <string>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
namespace imagesimple
{
    class ImageSimple
    {
    public:
        ImageSimple()
        {

        };

        void showImage(const string& strPath, int waitTimes = 0) {
            Mat src = imread(strPath, 1);
            imshow("what is it", src);
            waitKey(waitTimes);
        }

        bool writeImage(const string& src, const string& newFileName)
        {
            Mat mat = imread(src, 0); // 转灰阶后写入文件
            return imwrite(newFileName, mat);
        }

        ~ImageSimple()
        {
            destroyAllWindows();
        };
    };
}