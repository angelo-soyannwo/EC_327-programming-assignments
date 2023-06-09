
#include "GameCommand.h"

void DoMoveCommand(Model & model, int trainer_id, Point2D p1){

	if (model.is_valid_trainer(trainer_id)){
			model.Update();
			std::cout<<"Moving "<<(model.GetTrainerPtr(trainer_id))->GetName()<< " to " << p1 <<std::endl;
			(model.GetTrainerPtr(trainer_id))->StartMoving(p1);
	}
	else{
		std::cout<<"Error: Please enter a valid command!"<<std::endl;
	}

}

void DoMoveToCenterCommand(Model & model, int trainer_id, int center_id){

	if (model.is_valid_trainer(trainer_id) && model.is_valid_center(center_id)){

			std::cout<<"Moving "<<(model.GetTrainerPtr(trainer_id))->GetName()<< " to pokemon center " << (model.GetPokemonCenterPtr(center_id))->GetId() <<std::endl;
			(model.GetTrainerPtr(trainer_id))->StartMovingToCenter(model.GetPokemonCenterPtr(center_id));
			model.Update();
	}
	else{
		std::cout<<"Error: Please enter a valid command!"<<std::endl;
	}
}

void DoMoveToGymCommand(Model & model, int trainer_id, int gym_id){

	if (model.is_valid_trainer(trainer_id) && model.is_valid_gym(gym_id)){
		        
			std::cout<<"Moving "<<(model.GetTrainerPtr(trainer_id))->GetName()<< " to gym " << model.GetPokemonGymPtr(gym_id)->GetId() <<std::endl;
			(model.GetTrainerPtr(trainer_id))->StartMovingToGym(model.GetPokemonGymPtr(gym_id));
			model.Update();
	}
	else{
		std::cout<<"Error: Please enter a valid command!"<<std::endl;
	}
}

void DoStopCommand(Model & model, int trainer_id){

	if (model.is_valid_trainer(trainer_id)){
	        
		std::cout<<"Stopping "<<(model.GetTrainerPtr(trainer_id))->GetName() << std::endl;
		(model.GetTrainerPtr(trainer_id))->Stop();
		model.Update();
	}
	else{
		std::cout<<"Error: Please enter a valid command!"<<std::endl;
	}
}

void DoBattleCommand(Model & model, int trainer_id, unsigned int battles){

	if (model.is_valid_trainer(trainer_id)){

		        
			std::cout<<(model.GetTrainerPtr(trainer_id))->GetName()<< " is battling"<<std::endl;
			(model.GetTrainerPtr(trainer_id))->StartBattling(battles);
			model.Update();
	}
	else{
		std::cout<<"Error: Please enter a valid command!"<<std::endl;
	}
}

void DoRecoverInCenterCommand(Model & model, int trainer_id, unsigned int potions_needed){

	if (model.is_valid_trainer(trainer_id)){

	        
			std::cout<<(model.GetTrainerPtr(trainer_id))->GetName()<< "'s Pokemon's health"<<std::endl;
			(model.GetTrainerPtr(trainer_id))->StartRecoveringHealth(potions_needed);
			model.Update();
	}
	else{
		std::cout<<"Error: Please enter a valid command!"<<std::endl;
	}
}

void DoAdvanceCommand(Model& model, View& view){
	std::cout<<"Advancing one tick."<<std::endl;
	model.Update();
}

void DoRunCommand(Model& model, View& view){	
	int count;
	std::cout<<"Advancing to next event"<<std::endl;
	//	bool val = model.Update();

	for (count=0; count<5; count++){
	  //	val = model.Update();
		if(!model.Update()){
			break;
		}
	}
	//model.Display(view);

}



