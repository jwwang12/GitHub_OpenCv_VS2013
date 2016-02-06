//显示图像文件
//测试一下个github
#include <opencv2/opencv.hpp>
using namespace std;

#pragma comment(linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"")

int main()
{
	const char *pstrImageName = "learn2.JPG";
	const char *pstrWindowsTitle = "OpenCV第一个程序";

	//从文件中读取图像
	IplImage *pImage = cvLoadImage(pstrImageName, CV_LOAD_IMAGE_UNCHANGED);

	//创建窗口
	cvNamedWindow(pstrWindowsTitle, CV_WINDOW_AUTOSIZE);

	//在指定窗口中显示图像
	cvShowImage(pstrWindowsTitle, pImage);

	//等待按键事件
	cvWaitKey();

	cvDestroyWindow(pstrWindowsTitle);
	cvReleaseImage(&pImage);
	return 0;
}