

#include <iostream>


void readRectangle(float rectangle[]){

	//takes in an array and populates position 0 and 1 with the x coordinate and y coordinate of the lower left point respectively, as well as position 2 and 3 with the height and width respectively
	float x_coordinate,
	    y_coordinate,
	    l,
	    h;

	std::cout<<"x-coordinate: "; std::cin>>x_coordinate;
	std::cout<<"y-coordinate: ";	
	std::cin>>y_coordinate;

	rectangle[0] = x_coordinate;
	rectangle[1] = y_coordinate;

	std::cout<<"length: ";
	std::cin>>l;
	std::cout<<"height: ";
	std::cin>>h;
	rectangle[2] = l;
	rectangle[3] = h;


}

bool is_x_between(float point_1[], float point_2[], float point_to_check[]){

	bool x;

	//check if the x coordinate of a point is inbetween point 1 and 2
	if ((point_2[0] - point_to_check[0]) > point_1[0]) {
		x = 1;
	}
	else {
		x = 0;
	}

	return x;
}

bool is_y_between(float point_1[], float point_2[], float point_to_check[]){

	bool y;
	//check if the y coordinate of a point is inbetween point 1 and 2
	if ((point_2[1] - point_to_check[1]) > point_1[1]) {
		y = 1;
	}	
	else {
		y = 0;
	}

	return y;
}


bool check_for_intersections(float rectangle_1_point_1[], float rectangle_1_point_2[], float rectangle_1_point_3[], float rectangle_1_point_4[], float rectangle_2_point[]) {

	bool result_1, result_2, result_3, result_4, result;
	result_1 = is_x_between(rectangle_1_point_1, rectangle_1_point_2, rectangle_2_point);
	result_2 = is_x_between(rectangle_1_point_1, rectangle_1_point_4, rectangle_2_point);
	result_3 = is_y_between(rectangle_1_point_1, rectangle_1_point_3, rectangle_2_point);

	// logic for checking intersection
	if ((result_1 == 1) || (result_2 == 1)) {
		result_4 = 1;
	}
	else {
		result_4 = 0;
	}

	if ((result_3 == 1) && (result_4 == 1)) {
		result= 1;
	}
	else {
		result = 0;
	}

	return result;
	
}

void rectangle_check(float rectangle_1[], float rectangle_2[]){

	//2----3
	//|    |
	//1----4

	//initialize the points of rectangle 1	
	float rectangle_1_point_1[2] = {rectangle_1[0], rectangle_1[1]};
	float rectangle_1_point_2[2] = {rectangle_1[0], rectangle_1[1] + rectangle_1[3]};
	float rectangle_1_point_3[2] = {rectangle_1[0] + rectangle_1[2], rectangle_1[1] + rectangle_1[3]};
	float rectangle_1_point_4[2] = {rectangle_1[0] + rectangle_1[2], rectangle_1[1]};

	//initialize the points of rectangle 2	
	float rectangle_2_point_1[2] = {rectangle_2[0], rectangle_2[1]};
	float rectangle_2_point_2[2] = {rectangle_2[0], rectangle_2[1] + rectangle_2[3]};
	float rectangle_2_point_3[2] = {rectangle_2[0] + rectangle_2[2], rectangle_2[1] + rectangle_2[3]};
	float rectangle_2_point_4[2] = {rectangle_2[0] + rectangle_2[2], rectangle_2[1]};


	bool result_1 = check_for_intersections(rectangle_1_point_1, rectangle_1_point_2, rectangle_1_point_3, rectangle_1_point_4, rectangle_2_point_1);
	bool result_2 = check_for_intersections(rectangle_1_point_1, rectangle_1_point_2, rectangle_1_point_3, rectangle_1_point_4, rectangle_2_point_2);
	bool result_3 = check_for_intersections(rectangle_1_point_1, rectangle_1_point_2, rectangle_1_point_3, rectangle_1_point_4, rectangle_2_point_3);
	bool result_4 = check_for_intersections(rectangle_1_point_1, rectangle_1_point_2, rectangle_1_point_3, rectangle_1_point_4, rectangle_2_point_4);

	if (result_1 == 1|| result_2 == 1|| result_3 == 1|| result_4 == 1) {
		std::cout<< "THE RECTANGLES INTERSECT" << std::endl;
	}

	else {
		std::cout<< "THE RECTANGLES DO NOT INTERSECT" << std::endl;	
	}

}

int main() {

	float rectangle_1[4];
	float rectangle_2[4];

	// read in the rectangles
	std::cout<<"Enter the information for the first rectangle"<<std::endl;
	readRectangle(rectangle_1);
	std::cout<<"Enter the information for the second rectangle"<<std::endl;
	readRectangle(rectangle_2);

	rectangle_check(rectangle_1, rectangle_2);



//	for (int i=0; i<4; i++){
//		std::cout<<rectangle_1[i]<< ", ";
//	}
//	std::cout<<std::endl;

	return 0;

}


