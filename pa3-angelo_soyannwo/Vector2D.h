
#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <cmath>
#include <fstream>
#include <iostream>

class Vector2D{

	public:
	double x;
	double y;

	//default Point constructor
	Vector2D();

	//secondary constructor
	Vector2D (double in_x, double in_y);
	double getX();
	double getY();
	
	friend std::ostream &operator<<( std::ostream &output,Vector2D V); 

	//Vector2D operator / (Vector2D, double);
	//Vector2D operator * (Vector2D, double);
};


	std::ostream &operator<<( std::ostream &output,Vector2D V); 
	Vector2D operator / (Vector2D, double);
	Vector2D operator * (Vector2D, double);


#endif
