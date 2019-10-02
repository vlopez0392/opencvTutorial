/*
 * writeImages.cpp
 *
 *  Created on: Oct 3, 2019
 *      Author: vick
 */
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>
#include <string>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
	String imageName("/home/vick/eclipse-workspace/writeImages/images/happyFish.jpeg");

	Mat image;
	image = imread(imageName, IMREAD_COLOR);

	if(!image.data)
	{
		cout<<"No image data"<<std::endl;
		return -1;
	}

	Mat grayImage;
	cvtColor(image, grayImage, COLOR_BGR2GRAY );

	imwrite("/home/vick/eclipse-workspace/writeImages/images/Gray_image.jpeg", grayImage);

	namedWindow("Color image", WINDOW_AUTOSIZE);
	namedWindow("Gray image" , WINDOW_AUTOSIZE);

	imshow("Color image",image);
	imshow("Gray image",grayImage);

	waitKey(0);
	return 0;
}


