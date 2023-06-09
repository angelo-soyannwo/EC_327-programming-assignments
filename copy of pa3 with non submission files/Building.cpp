
#include "Building.h"

	Building::Building():GameObject('B') {
		std::cout<<"Building default constructed"<<std::endl;
	}

	Building::Building(char in_code, int in_Id, Point2D in_loc): GameObject(in_loc, in_Id, in_code) {
		std::cout<<"Building constructed"<<std::endl;
	}

	void Building::AddOneTrainer(){
		trainer_count++;
	}

	void Building::RemoveOneTrainer(){
		trainer_count--;
	}

	void Building::ShowStatus(){
		if (trainer_count == 1){
			std::cout<< display_code << " " << GetId() <<": " << location<<std::endl;	
			std::cout<<trainer_count<<" trainer is in this building"<<std::endl;
		}
		else{
			std::cout<< display_code << " " << GetId() <<": " << location<<std::endl;	
			std::cout<<trainer_count<<" trainers are in this building"<<std::endl;
		}
	}
	bool Building::ShouldBeVisible(){
		return true;
	}

	double Building::getTrainerCount(){
		return trainer_count;
	}

	bool Building::Update(){
		return true;
	}

	Building::~Building(){}
