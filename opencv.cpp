/*
 * opencv.cpp
 *
 *  Created on: 16 mai 2017
 *      Author: tux
 */

#include "opencv.hpp"
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void Marker::TriangleUp(Mat& img, Point position, const Scalar& color, int markerSize, int thickness, int line_type)
{
	line(img, Point(position.x, position.y-(markerSize/2)), Point(position.x+(markerSize/2), position.y), color, thickness, line_type);
	line(img, Point(position.x-(markerSize/2), position.y), Point(position.x, position.y-(markerSize/2)), color, thickness, line_type);
	line(img, Point(position.x-(markerSize/2), position.y), Point(position.x+(markerSize/2), position.y), color, thickness, line_type);
}

void Marker::TriangleDown(Mat& img, Point position, const Scalar& color, int markerSize, int thickness, int line_type)
{
	line(img, Point(position.x+(markerSize/2), position.y), Point(position.x, position.y+(markerSize/2)), color, thickness, line_type);
	line(img, Point(position.x, position.y+(markerSize/2)), Point(position.x-(markerSize/2), position.y), color, thickness, line_type);
	line(img, Point(position.x-(markerSize/2), position.y), Point(position.x+(markerSize/2), position.y), color, thickness, line_type);
}

void Marker::TriangleLeft(Mat& img, Point position, const Scalar& color, int markerSize, int thickness, int line_type)
{
	line(img, Point(position.x, position.y+(markerSize/2)), Point(position.x-(markerSize/2), position.y), color, thickness, line_type);
	line(img, Point(position.x-(markerSize/2), position.y), Point(position.x, position.y-(markerSize/2)), color, thickness, line_type);
	line(img, Point(position.x, position.y-(markerSize/2)), Point(position.x, position.y+(markerSize/2)), color, thickness, line_type);
}

void Marker::TriangleRight(Mat& img, Point position, const Scalar& color, int markerSize, int thickness, int line_type)
{
	line(img, Point(position.x, position.y-(markerSize/2)), Point(position.x+(markerSize/2), position.y), color, thickness, line_type);
	line(img, Point(position.x+(markerSize/2), position.y), Point(position.x, position.y+(markerSize/2)), color, thickness, line_type);
	line(img, Point(position.x, position.y-(markerSize/2)), Point(position.x, position.y+(markerSize/2)), color, thickness, line_type);
}

void Marker::Cross(Mat& img, Point position, const Scalar& color, int markerSize, int thickness, int line_type)
{
	line(img, Point(position.x-(markerSize/2), position.y), Point(position.x+(markerSize/2), position.y), color, thickness, line_type);
	line(img, Point(position.x, position.y-(markerSize/2)), Point(position.x, position.y+(markerSize/2)), color, thickness, line_type);
}

void Marker::Square(Mat& img, Point position, const Scalar& color, int markerSize, int thickness, int line_type)
{
	line(img, Point(position.x-(markerSize/2), position.y-(markerSize/2)), Point(position.x+(markerSize/2), position.y-(markerSize/2)), color, thickness, line_type);
	line(img, Point(position.x+(markerSize/2), position.y-(markerSize/2)), Point(position.x+(markerSize/2), position.y+(markerSize/2)), color, thickness, line_type);
	line(img, Point(position.x+(markerSize/2), position.y+(markerSize/2)), Point(position.x-(markerSize/2), position.y+(markerSize/2)), color, thickness, line_type);
	line(img, Point(position.x-(markerSize/2), position.y+(markerSize/2)), Point(position.x-(markerSize/2), position.y-(markerSize/2)), color, thickness, line_type);
}

void Marker::Diamond(Mat& img, Point position, const Scalar& color, int markerSize, int thickness, int line_type)
{
	line(img, Point(position.x, position.y-(markerSize/2)), Point(position.x+(markerSize/2), position.y), color, thickness, line_type);
	line(img, Point(position.x+(markerSize/2), position.y), Point(position.x, position.y+(markerSize/2)), color, thickness, line_type);
	line(img, Point(position.x, position.y+(markerSize/2)), Point(position.x-(markerSize/2), position.y), color, thickness, line_type);
	line(img, Point(position.x-(markerSize/2), position.y), Point(position.x, position.y-(markerSize/2)), color, thickness, line_type);
}

void Marker::Star(Mat& img, Point position, const Scalar& color, int markerSize, int thickness, int line_type)
{
	line(img, Point(position.x-(markerSize/2), position.y), Point(position.x+(markerSize/2), position.y), color, thickness, line_type);
	line(img, Point(position.x, position.y-(markerSize/2)), Point(position.x, position.y+(markerSize/2)), color, thickness, line_type);
	line(img, Point(position.x-(markerSize/2), position.y-(markerSize/2)), Point(position.x+(markerSize/2), position.y+(markerSize/2)), color, thickness, line_type);
	line(img, Point(position.x+(markerSize/2), position.y-(markerSize/2)), Point(position.x-(markerSize/2), position.y+(markerSize/2)), color, thickness, line_type);
}

void Marker::Circle(Mat& img, Point position, int radius, const Scalar& color, int markerSize, int thickness, int line_type)
{
	circle(img, Point(position.x, position.y), radius, color, thickness, line_type);
}
