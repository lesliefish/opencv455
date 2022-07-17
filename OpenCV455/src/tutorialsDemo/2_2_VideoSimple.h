#pragma once
#include <string>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

namespace videosimple
{
	class VideoSimple {
	public:
		VideoSimple() {}
		~VideoSimple() {}

	public:
		// 从相机读取视频数据
		void readVideoFromCamera()
		{
			cv::VideoCapture vc(0); // 打开摄像头
			if (vc.isOpened())
			{
				Mat frame;
				while (true)
				{
					vc >> frame;
					if (frame.empty())
					{
						return;
					}
					imshow("Camera Video", frame);
					if (27 == waitKey(30)) //ESC 退出采集
					{
						break;
					}
				}
				destroyWindow("Camera Video");
			}
		}

		void readVideoFromFile(const string& path)
		{
			cv::VideoCapture vc(path); // 打开文件
			if (vc.isOpened())
			{
				Mat frame;
				while (true)
				{
					vc >> frame;
					if (frame.empty())
					{
						return;
					}
					imshow("File Video", frame);
					if (27 == waitKey(30)) //ESC 退出
					{
						break;
					}
				}
				destroyWindow("File Video");
			}
		}

	};
}