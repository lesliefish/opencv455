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
		// �������ȡ��Ƶ����
		void readVideoFromCamera()
		{
			cv::VideoCapture vc(0); // ������ͷ
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
					if (27 == waitKey(30)) //ESC �˳��ɼ�
					{
						break;
					}
				}
				destroyWindow("Camera Video");
			}
		}

		void readVideoFromFile(const string& path)
		{
			cv::VideoCapture vc(path); // ���ļ�
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
					if (27 == waitKey(30)) //ESC �˳�
					{
						break;
					}
				}
				destroyWindow("File Video");
			}
		}

	};
}