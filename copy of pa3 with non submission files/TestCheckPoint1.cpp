#include "Point2D.h"
#include "Vector2D.h"
#include "GameObject.h"

using namespace std;

int main(){
	Point2D p1(0, 0);
	Point2D p2(0, 1);
	Vector2D v1(0, 1);
	Vector2D v2(1, 0);

	
	//std::cout<<v1*2<<std::endl;
	//std::cout<<p1<<" "<<p2<<" "<< GetDistanceBetween(p1, p2)<<std::endl;
	//Point2D p = a.GetLocation() 
	//std::cout<<p<<std::endl;
	//<<a.GetId()<<std::endl;
	Vector2D v = p2 - p1;
	std::cout<<v<<std::endl;

	return 0;
}

