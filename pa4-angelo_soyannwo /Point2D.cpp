#include "Point2D.h"

//default Point constructor
Point2D::Point2D(){double x = 0; double y = 0;}

//secondary constructor
Point2D::Point2D (double in_x, double in_y){
	x = in_x;
	y = in_y;
}


double Point2D::getX(){
	return x;
}
double Point2D::getY(){
	return y;
}

//overload the << operator
std::ostream &operator<<( std::ostream &output, Point2D &P ) { 
	output << "(" << P.getX() << ", " << P.getY() <<")";
	return output;            
}

double GetDistanceBetween(Point2D p1, Point2D p2){

	double squared_x_distance = pow((p2.getX() - p1.getX()), 2);
	double squared_y_distance = pow((p2.getY() - p1.getY()), 2);

	return pow((squared_x_distance+squared_y_distance), 0.5);

}

//Point2D operator+ (Point2D const &point){
Point2D operator+ (Point2D const &point, Point2D const &point1){
	Point2D new_point;
	new_point.x = point.x + point1.x;
	new_point.y = point.y + point1.y;
	return new_point;

}


//Vector2D operator- (Point2D const &point){
Vector2D operator- (Point2D const &point, Point2D const &point1){
	Vector2D new_vector;
	new_vector.x = point.x - point1.x;
	new_vector.y = point.y - point1.y;
	return new_vector;
	

}
