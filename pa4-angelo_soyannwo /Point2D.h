

#ifndef POINT2D_H
#define POINT2D_H

#include <cmath>
#include <fstream>
#include <iostream>
#include "Vector2D.h"

class Point2D{

	public:
	double x;
	double y;

	Point2D();

	Point2D (double in_x, double in_y);

	double getX();
	double getY();


	friend std::ostream &operator<<( std::ostream &output, Point2D &P);


};

std::ostream &operator<<( std::ostream &output, Point2D &P ); 
Vector2D operator- (Point2D const &point, Point2D const &point1);
Point2D operator+ (Point2D const &point, Point2D const &point1);
double GetDistanceBetween(Point2D, Point2D);

#endif
