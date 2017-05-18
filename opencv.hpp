/*
 * opencv.hpp
 *
 *  Created on: 16 mai 2017
 *      Author: tux
 */

#ifndef OPENCV_HPP_
#define OPENCV_HPP_

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

class Marker
{
public:
	void TriangleUp(Mat&, Point, const Scalar&, int, int, int);
	void TriangleDown(Mat&, Point, const Scalar&, int, int, int);
	void TriangleLeft(Mat&, Point, const Scalar&, int, int, int);
	void TriangleRight(Mat&, Point, const Scalar&, int, int, int);

	void Cross(Mat&, Point, const Scalar&, int, int, int);
	void Square(Mat&, Point, const Scalar&, int, int, int);
	void Diamond(Mat&, Point, const Scalar&, int, int, int);
	void Star(Mat&, Point, const Scalar&, int, int, int);
	void Circle(Mat&, Point, int, const Scalar&, int, int, int);


private:
	Mat img;
	Point position;
	Scalar color;

	int markerSize;
	int thickness;
	int line_type;
};

#endif /* OPENCV_HPP_ */

