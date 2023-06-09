#include "GameObject.h"



	GameObject::GameObject(char in_code){
		display_code = in_code;
		id_num = 1;
		state = 0;
		std::cout<<"GameObject constructed"<<std::endl;
	}

	GameObject::GameObject(Point2D in_loc, int in_id,char in_code){
		location = in_loc;
		id_num = in_id;
		display_code = in_code;
		state = 0;
		std::cout<<"GameObject constructed"<<std::endl;
	}

	Point2D GameObject::GetLocation(){
		return location;
	}

	int GameObject::GetId(){
		return id_num;
	}

	char GameObject::GetState() {
		return state;
	}

	void GameObject::ShowStatus(){
		std::cout<< display_code << " " << GetId() <<": " << location<<std::endl;	
	}


	void GameObject::DrawSelf(char * ptr){
		*(ptr) = display_code;
		ptr[1] = char(id_num+48); 
	}


	void GameObject::set_display_code(char val){
		display_code = val;
	}

	GameObject::~GameObject(){
		std::cout<<"GameObject Destructed"<<std::endl;
	}
