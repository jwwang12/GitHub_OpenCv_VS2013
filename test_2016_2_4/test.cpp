//change the zhushi in English
//测试一下github中文显示
#include <opencv2/opencv.hpp>
using namespace std;

#pragma comment(linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"")

int main()
{
	const char *pstrImageName = "learn2.JPG";
	const char *pstrWindowsTitle = "OpenCV the first program hahaha";

	//read the image from file
	IplImage *pImage = cvLoadImage(pstrImageName, CV_LOAD_IMAGE_UNCHANGED);

	//create windows
	cvNamedWindow(pstrWindowsTitle, CV_WINDOW_AUTOSIZE);

	//show the image the windows
	cvShowImage(pstrWindowsTitle, pImage);

	//wait the thing of the key
	cvWaitKey();

	cvDestroyWindow(pstrWindowsTitle);
	cvReleaseImage(&pImage);
	return 0;
}