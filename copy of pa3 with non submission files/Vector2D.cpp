
#include "Vector2D.h"


	//default Point constructor
	Vector2D::Vector2D(){
		x = 0;
		y = 0;
	}
	//secondary constructor
	Vector2D::Vector2D (double in_x, double in_y){
		x = in_x;
		y = in_y;
	}

	double Vector2D::getX(){
		return x;
	}
	double Vector2D::getY(){
		return y;
	}

/*	
	friend std::ostream &operator<<( std::ostream &output,Vector2D V); 

	Vector2D operator * (double d);
	Vector2D operator / (double d);
};
*/

	//overload the * operator
	Vector2D operator * (Vector2D vector, double d){

		Vector2D new_vector;
		new_vector.x = d* vector.x;
		new_vector.y = d * vector.y;
		return new_vector;
	}

	//overload the / operator
	Vector2D operator / (Vector2D vector, double d){

		Vector2D new_vector;
		new_vector.x = vector.x / d;
		new_vector.y = vector.y / d;
		return new_vector;
	}

	//overload the << operator
	std::ostream &operator<<( std::ostream &output,Vector2D V) { 
		output << "<" << V.getX() << ", " << V.getY() <<">";
		return output;            
      }


