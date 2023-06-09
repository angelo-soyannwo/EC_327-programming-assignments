
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

		wild_ptrs = {
			new WildPokemon("Pikachu", 5, 2, false, 1, Point2D(10, 12)),
			new WildPokemon("Raichu", 5, 2, false, 2, Point2D(15, 5))
		};
		object_ptrs.insert(object_ptrs.end(), wild_ptrs.begin(), wild_ptrs.end());

		active_ptrs.insert(active_ptrs.begin(), object_ptrs.begin(), object_ptrs.end());


		std::cout<<"Model default constructed"<<std::endl;
	}

	Model::~Model(){
		for 
		std::cout<<"Model destructed."<<std::endl;
	}

	void Model::destroy(){
		this->Model::~Model();
	}

	Trainer* Model::GetTrainerPtr(int id){
		Trainer * trainer;
		for (int i=0; i < num_trainers; i++){
			if(trainer_ptrs[i]->GetId() == id){
				trainer = trainer_ptrs[i];
				break;
			}
		}
		return trainer;
	}

	PokemonCenter* Model::GetPokemonCenterPtr(int id){
		PokemonCenter * center;
		for (int i=0; i < num_centers; i++){
			if(center_ptrs[i]->GetId() == id){
				center = center_ptrs[i];
				break;
			}
		}
		return center;
	}

	PokemonGym* Model::GetPokemonGymPtr(int id){
		PokemonGym * gym;
		for (int i=0; i < num_gyms; i++){
			if(gym_ptrs[i]->GetId() == id){
				gym = gym_ptrs[i];
				break;
			}
		}
		return gym;
	}

	WildPokemon* Model::GetWildPokemonPtr(int id) {

		WildPokemon * wildpokemon_ptr;

		for (int i = 0; i < num_wildpokemon; i++) {

		if (wildpokemon_ptrs[i]->GetId() == id) {

			wildpokemon_ptr = wildpokemon_ptrs[i];
			break;

		}

	}

  return wildpokemon_ptr;

}

	bool Model::Update(){
		time++;
		PokemonCenter* Ctemp;
		PokemonGym* Gtemp;
		WildPokemon* W;
		Trainer* Ttemp;
		bool val = false;
		int num_gyms_defeated=0;
		int num_trainers_fainted = 0;

		for (int i=0; i<num_centers; i++){
			Ctemp = center_ptrs[i];
			if(Ctemp->Update()){
				val = true;
			}
		}
		for (int i=0; i<num_trainers; i++){
			Ttemp = trainer_ptrs[i];
			if(Ttemp->Update()){
				val = true;
			}
			if (Ttemp->HasFainted()){
				num_trainers_fainted += 1;
			}
		}
		for (int i=0; i<num_gyms; i++){
			Gtemp = gym_ptrs[i];
			if(Gtemp->Update()){
				val = true;
			}
			if (Gtemp->GetNumBattlesRemaining() == 0){
				Gtemp->set_display_code('g');
				num_gyms_defeated += 1;
			}
		}

		for (int i = 0; i < num_wildpokemon; i++) {
			W = wildpokemon_ptrs[i];
			if (W->Update()){
				val = true;
			}

		}

		Point2D wild_pokemon_location1 = wildpokemon_ptrs[0]->GetLocation();
		Point2D wild_pokemon_location2 = wildpokemon_ptrs[1]->GetLocation();
		Point2D trainer_location1 = trainer_ptrs[0]->GetLocation();
		Point2D trainer_location2 = trainer_ptrs[1]->GetLocation();

		if(wild_pokemon_location1.x == trainer_location1.x && wild_pokemon_location1.y == trainer_location1.y){
			wildpokemon_ptrs[0]->follow(trainer_ptrs[0]);
		}

		if(wild_pokemon_location2.x == trainer_location1.x && wild_pokemon_location2.y == trainer_location1.y){
			wildpokemon_ptrs[1]->follow(trainer_ptrs[0]);
		}

		if(wild_pokemon_location1.x == trainer_location2.x && wild_pokemon_location1.y == trainer_location2.y){
			wildpokemon_ptrs[0]->follow(trainer_ptrs[1]);
		}

		if(wild_pokemon_location2.x == trainer_location2.x && wild_pokemon_location2.y == trainer_location2.y){
			wildpokemon_ptrs[1]->follow(trainer_ptrs[1]);
		}




		if (num_trainers == num_trainers_fainted){
			std::cout<<"GAME OVER: You lose! All of your Trainers' pokemon have fainted!"<<std::endl;
			destroy();
			exit(0);
		}
		if (num_gyms == num_gyms_defeated){
			std::cout<<"GAME OVER: You win! All battles done!"<<std::endl;
			destroy();
			exit(0);
		}
		return val;
	}

	void Model::ShowStatus(){
		PokemonCenter* Ctemp;
		PokemonGym* Gtemp;
		Trainer* Ttemp;
		WildPokemon* Wtemp;

		for (int i=0; i<num_centers; i++){
			Ctemp = center_ptrs[i];
			Ctemp->ShowStatus();
		}
		for (int i=0; i<num_trainers; i++){
			Ttemp = trainer_ptrs[i];
			Ttemp->ShowStatus();
		}
		for (int i=0; i<num_gyms; i++){
			Gtemp = gym_ptrs[i];
			Gtemp->ShowStatus();
		}
		for (int i = 0; i < num_wildpokemon; i++) {
 			Wtemp = wildpokemon_ptrs[i];
			Wtemp->ShowStatus();
		}

	}

	bool Model::is_valid_trainer(int id){
		Trainer* Ttemp;
	
		for (int i=0; i<num_trainers; i++){
			Ttemp = trainer_ptrs[i];
			if(Ttemp->GetId() == id){
				return true;
			}
		}

		return false;
	}


	bool Model::is_valid_center(int id){
		PokemonCenter* Ctemp;
	
		for (int i=0; i<num_trainers; i++){
			Ctemp = center_ptrs[i];
			if(Ctemp->GetId() == id){
				return true;
			}
		}

		return false;
	}


	bool Model::is_valid_gym(int id){
		PokemonGym* Gtemp;
	
		for (int i=0; i<num_trainers; i++){
			Gtemp = gym_ptrs[i];
			if(Gtemp->GetId() == id){
				return true;
			}
		}

		return false;
	}

	void Model::Display(View &View){
		std::cout<<"Time: "<<time<<std::endl;
		ShowStatus();
		View.Clear();
		for(int i=0; i<num_objects; i++){
			if(object_ptrs[i]->ShouldBeVisible()){
				View.Plot(object_ptrs[i]);
			}
		}
		View.Draw();
	}


