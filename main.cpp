/*
 * main.cpp
 *
 *  Created on: 15 mai 2017
 *      Author: tux
 */

#include <iostream>
#include <opencv2/tracking.hpp>
#include <opencv2/opencv.hpp>
#include "opencv.hpp"

using namespace std;
using namespace cv;

int main()
{
	Mat frame;

	Marker figure;

	Scalar blanc = Scalar(255,255,255);
	Scalar vert = Scalar(0,255,0);
	Scalar rouge = Scalar(0,0,255);
	Scalar bleu = Scalar(255,0,0);

	VideoCapture cap(0);

	while(true)
	{
		cap >> frame;

		figure.TriangleUp(frame, Point(frame.cols/2, 10), rouge, 20, 1, 8);
		figure.TriangleDown(frame, Point(frame.cols/2, frame.rows - 10), rouge, 20, 1, 8);
		figure.TriangleLeft(frame, Point(10, frame.rows/2), blanc, 20, 1, 8);
		figure.TriangleRight(frame, Point(frame.cols-10, frame.rows/2), bleu, 20, 1, 8);
		figure.Star(frame, Point(frame.cols/2, frame.rows/2), vert, 20, 1, 8);
		figure.Circle(frame, Point(frame.cols/2, frame.rows/2), 20, rouge, 20, 3, 8);

		imshow("Frame", frame);
		waitKey(32);
	}
	destroyAllWindows();
	return 0;
}


