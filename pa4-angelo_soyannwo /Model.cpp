
#include "Model.h"

	Model::Model(){
		time = 0;

		trainer_ptrs = {
				new Trainer("Ash", 1, 'T', 1, Point2D(5, 1)), 
				new Trainer("Misty", 2, 'T', 2, Point2D(10, 1))
		};
		object_ptrs.insert(object_ptrs.begin(), trainer_ptrs.begin(), trainer_ptrs.end());

		center_ptrs = {
			new PokemonCenter(1, 1, 100, Point2D(1, 20)),
			new PokemonCenter(2, 2, 200, Point2D(10, 20))
		};
		object_ptrs.insert(object_ptrs.end(), center_ptrs.begin(), center_ptrs.end());

		gym_ptrs = {
			new PokemonGym(10, 1, 2, 3, 1, Point2D(0, 0)),
			new PokemonGym(20, 5, 7.5, 4, 2, Point2D(5, 5))
		};
		object_ptrs.insert(object_ptrs.end(), gym_ptrs.begin(), gym_ptrs.end());

		wildpokemon_ptrs = {
			new WildPokemon("Pikachu", 5, 2, false, 1, Point2D(10, 12)),
			new WildPokemon("Raichu", 5, 2, false, 2, Point2D(15, 5))
		};
		object_ptrs.insert(object_ptrs.end(), wildpokemon_ptrs.begin(), wildpokemon_ptrs.end());

		active_ptrs.insert(active_ptrs.begin(), object_ptrs.begin(), object_ptrs.end());


		std::cout<<"Model default constructed"<<std::endl;
		std::cout << "Time: " << time << std::endl;
	}

	Model::~Model(){
		for (auto it = object_ptrs.begin(); it != object_ptrs.end(); ++it){
			delete *it;
		}
		std::cout<<"Model destructed."<<std::endl;
	}

	void Model::destroy(){
		this->Model::~Model();
	}

	//Get objects from 
	Trainer* Model::GetTrainerPtr(int id){
		trainer_iterator = std::next(trainer_ptrs.begin(), id);
		return *trainer_iterator;
	}

	PokemonCenter* Model::GetPokemonCenterPtr(int id){
		center_iterator = std::next(center_ptrs.begin(), id);
		return *center_iterator;
	}

	PokemonGym* Model::GetPokemonGymPtr(int id){
		gym_iterator = std::next(gym_ptrs.begin(), id);
		return *gym_iterator;
	}

	WildPokemon* Model::GetWildPokemonPtr(int id) {
		wildpokemon_iterator = next(wildpokemon_ptrs.begin(), id);
		return *wildpokemon_iterator;
	}

	GameObject* Model::GetGameObjectPtr(int id) {
		object_iterator = std::next(object_ptrs.begin(), id);
		return *object_iterator;
	}

	GameObject* Model::GetActiveGameObjectPtr(int id) {
		object_iterator = std::next(active_ptrs.begin(), id);
		return *object_iterator;
	}

	bool Model::IsValidId(int id, char c) {

		for (int i = 0; i < object_ptrs.size(); i++) {
			if (	(GetGameObjectPtr(i)->GetId() == id) && (std::tolower(GetGameObjectPtr(i)->GetCode(), std::locale()) == tolower(c, std::locale()))	) {
				return true;
			}
		}
		return false;
	}


	bool Model::Update(){
		time++;
		bool val = false;
		int num_gyms_defeated=0;
		int num_trainers_fainted = 0;

		for (int i = 0; i < wildpokemon_ptrs.size(); i++) {
			for (int j = 0; j < trainer_ptrs.size(); j++) {
				if ( (GetWildPokemonPtr(i)->GetLocation().x == GetTrainerPtr(j)->GetLocation().x) && (GetWildPokemonPtr(i)->GetLocation().y == GetTrainerPtr(j)->GetLocation().y) ) {
					GetWildPokemonPtr(i)->follow(GetTrainerPtr(j));
				}
			}
  		}


		for (int i = 0; i < active_ptrs.size(); i++) {
			if (GetActiveGameObjectPtr(i)->Update()) {
				val = true;
			}
			else {
				val = false;
			}
		}

		for (int i = 0; i < gym_ptrs.size(); i++) {
			if (GetPokemonGymPtr(i)->passed()) {
				GetPokemonGymPtr(i)->set_display_code('g');
				num_gyms_defeated++;
			}
		}

		for (int i = 0; i < trainer_ptrs.size(); i++) {
			if (GetTrainerPtr(i)->HasFainted()) {
				num_trainers_fainted++;
			}
		}

		if (num_trainers_fainted >= trainer_ptrs.size()) {
			std::cout << "GAME OVER: You lose! All of your Trainers' pokemon have fainted!" << std::endl;
			destroy();
			exit(0);
		}

		if (num_gyms_defeated >= gym_ptrs.size()) {
			std::cout << "GAME OVER: You win! All battles done!" << std::endl;
			destroy();
			exit(0);
		}

		for (int i = 0; i < active_ptrs.size(); i++) {
			if (GetActiveGameObjectPtr(i)->GetState() == FAINTED) {
				object_iterator = std::next(active_ptrs.begin(), i);
				std::cout << "Erasing dead object " << GetActiveGameObjectPtr(i)->GetId() << std::endl;
				active_ptrs.erase(object_iterator);
			}
		}
		return val;
	}

	void Model::ShowStatus(){
		for (int i = 0; i < object_ptrs.size(); i++) {
    			GetGameObjectPtr(i)->ShowStatus();
		}
	}

	void Model::Display(View &View){
		std::cout<<"Time: "<<time<<std::endl;
		ShowStatus();
		View.Clear();
		for (int i = 0; i < active_ptrs.size(); i++) {
			View.Plot(GetActiveGameObjectPtr(i));
		}
		View.Draw();
	}

	void Model::NewCommand(char type, int id, Point2D p) {

		switch(type) {

		case ('c'):
			center_ptrs.push_back(new PokemonCenter(id+1, 1, 100, p));
			center_iterator= next(center_ptrs.end(), -1);
			object_ptrs.insert(object_ptrs.end(), center_iterator, center_ptrs.end());
			active_ptrs.insert(active_ptrs.end(), center_iterator, center_ptrs.end());
			break;

		case ('g'):
			gym_ptrs.push_back(new PokemonGym(10, 1, 2, 3, id + 1, p));
			gym_iterator = next(gym_ptrs.end(), -1);
			object_ptrs.insert(object_ptrs.end(), gym_iterator, gym_ptrs.end());
			active_ptrs.insert(active_ptrs.end(), gym_iterator, gym_ptrs.end());
			break;

		case ('t'):
			trainer_ptrs.push_back(new Trainer("New Trainer", id + 1, 'T', 2, p));
			trainer_iterator = next(trainer_ptrs.end(), -1);
			object_ptrs.insert(object_ptrs.end(), trainer_iterator, trainer_ptrs.end());
			active_ptrs.insert(active_ptrs.end(), trainer_iterator, trainer_ptrs.end());
			break;

		case ('w'):
			wildpokemon_ptrs.push_back(new WildPokemon("New WildPokemon", 5, 50, false, id + 1, p));
			wildpokemon_iterator = next(wildpokemon_ptrs.end(), -1);
			object_ptrs.insert(object_ptrs.end(), wildpokemon_iterator, wildpokemon_ptrs.end());
			active_ptrs.insert(active_ptrs.end(), wildpokemon_iterator, wildpokemon_ptrs.end());
			break;

		default:
			break;

		}

	}

