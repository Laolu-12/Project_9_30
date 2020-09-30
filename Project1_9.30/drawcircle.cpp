#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main()
{
	cv::Mat dispMat=imread("C:\\Users\\Lenovo\\Desktop\\∫Ï–°∂π.jpg");
	cv::Point pt;
	pt.x = 10;
	pt.y = 10;
	circle(dispMat, pt, 5, CV_RGB(255, 0, 0), 1, 8, 0);
	cv::imshow("circle", dispMat);
	waitKey(0);
}