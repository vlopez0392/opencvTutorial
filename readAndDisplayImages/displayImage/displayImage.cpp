/*
 * displayImage.cpp
 *
 *  Created on: Oct 1, 2019
 *      Author: vick
 */
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>
#include <string>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
	String imageName("/home/vick/eclipse-workspace/readAndDisplayImages/images/cat-02.jpg.png");

	if(argc >1){
		imageName = argv[1];
	}

	Mat image;
	image = imread(imageName, IMREAD_COLOR);

	if(image.empty()){
		cout<<"Could not open or find the image" << std::endl ;
		return -1;
	}

	namedWindow( "Display Image", WINDOW_AUTOSIZE);
	imshow( "Display Image", image );
	waitKey(0);
	return 0;

}


