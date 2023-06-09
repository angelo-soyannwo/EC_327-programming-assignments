
#include "GameCommand.h"

	void DoMoveCommand(Model & model, int trainer_id, Point2D p1){

			std::cout<<"Moving "<<(model.GetTrainerPtr(trainer_id))->GetName()<< " to " << p1 <<std::endl;
			(model.GetTrainerPtr(trainer_id))->StartMoving(p1);
			model.Update();
	}

	void DoMoveToCenterCommand(Model & model, int trainer_id, int center_id){

			std::cout<<"Moving "<<(model.GetTrainerPtr(trainer_id))->GetName()<< " to pokemon center " << (model.GetPokemonCenterPtr(center_id))->GetId() <<std::endl;
			(model.GetTrainerPtr(trainer_id))->StartMovingToCenter(model.GetPokemonCenterPtr(center_id));
			model.Update();
	}

	void DoMoveToGymCommand(Model & model, int trainer_id, int gym_id){

			std::cout<<"Moving "<<(model.GetTrainerPtr(trainer_id))->GetName()<< " to gym " << model.GetPokemonGymPtr(gym_id)->GetId() <<std::endl;
			(model.GetTrainerPtr(trainer_id))->StartMovingToGym(model.GetPokemonGymPtr(gym_id));
			model.Update();
	}

	void DoStopCommand(Model & model, int trainer_id){

			std::cout<<"Stopping "<<(model.GetTrainerPtr(trainer_id))->GetName() << std::endl;
			(model.GetTrainerPtr(trainer_id))->Stop();
			model.Update();
	}

	void DoBattleCommand(Model & model, int trainer_id, unsigned int battles){

			std::cout<<(model.GetTrainerPtr(trainer_id))->GetName()<< " is battling"<<std::endl;
			(model.GetTrainerPtr(trainer_id))->StartBattling(battles);
			model.Update();
	}

	void DoRecoverInCenterCommand(Model & model, int trainer_id, unsigned int potions_needed){

			std::cout<<(model.GetTrainerPtr(trainer_id))->GetName()<< "'s Pokemon's health"<<std::endl;
			(model.GetTrainerPtr(trainer_id))->StartRecoveringHealth(potions_needed);
			model.Update();
	}

	void DoAdvanceCommand(Model& model, View& view){
		std::cout<<"Advancing one tick."<<std::endl;
		model.Update();
	}

	void DoRunCommand(Model& model, View& view){	
		int count;
		std::cout<<"Advancing to next event"<<std::endl;

		for (count=0; count<5; count++){
			if(!model.Update()){
				break;
			}
		}

	}

	//-----------------------------------PA4 new functions-----------------------------------//

	void DoCreateCommand(Model & model, char type, int id, Point2D p) {
		model.NewCommand(type, id, p);
	}

	unsigned int get_unsigned_int() {

		unsigned int d;
		if (!(std::cin >> d)) {
			throw Invalid_Input("Expecting unsigned int");
		}

		return d;

	}


	char get_char() {

		char c;
		if (!(std::cin >> c) || ((int)c < 97 && (int)c > 122)) {
			throw Invalid_Input("Expecting valid character");
		}
		return c;

	}


	int get_int() {

		int i;
		if (!(std::cin >> i) || i < 0) {
			throw Invalid_Input("Expecting valid int");
		}
		return i;

	}

	int get_int(Model & model, char c) {

		int i;
		if (!(std::cin >> i) || i > 9 || i < 1 || !(model.IsValidId(i, c))) {
			throw Invalid_Input("Expecting valid int id");
		}
		i--;
		return i;

	}

	int get_id_int(Model & model, char c) {

		int i;
		if (!(std::cin >> i) || i<1 || i>9 || (model.IsValidId(i, c))) {
			throw Invalid_Input("Expecting valid int id");
		}
		i--;
		return i;

	}





