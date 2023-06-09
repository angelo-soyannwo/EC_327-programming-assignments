
#include "Model.h"

	Model::Model(){
		time = 0;
		PokemonCenter* C1 = new PokemonCenter(1, 1, 100, Point2D(1, 20));
		PokemonCenter* C2 = new PokemonCenter(2, 1, 100, Point2D(10, 20));

		center_ptrs[0] = C1;
		center_ptrs[1] = C2;

		Trainer* T1 = new Trainer("Ash", 1, 'T', 1, Point2D(5, 1));
		Trainer* T2 = new Trainer("Misty", 2, 'T', 2, Point2D(10, 1));

		trainer_ptrs[0] = T1;
		trainer_ptrs[1] = T2;

		PokemonGym* G1 = new PokemonGym(10, 5, 2, 3, 1, Point2D(0, 0));
		PokemonGym* G2 = new PokemonGym(20, 5, 7.5, 4, 2, Point2D(5, 5));

		gym_ptrs[0] = G1;
		gym_ptrs[1] = G2;

		object_ptrs[0] = C1;
		object_ptrs[1] = C2;
		object_ptrs[2] = T1;
		object_ptrs[3] = T2;
		object_ptrs[4] = G1;
		object_ptrs[5] = G2;

		num_objects = 6;
		num_trainers = 2;
		num_centers = 2;
		num_gyms = 2;

		std::cout<<"Model default constructed"<<std::endl;
	}

	Model::~Model(){
		PokemonCenter* Ctemp;
		PokemonGym* Gtemp;
		Trainer* Ttemp;

		for (int i=0; i<num_gyms; i++){
			Gtemp = gym_ptrs[i];
			delete Gtemp;
		}
	
		for (int i=0; i<num_centers; i++){
			Ctemp = center_ptrs[i];
			delete Ctemp;
		}


		for (int i=0; i<num_trainers; i++){
			Ttemp = trainer_ptrs[i];
			delete Ttemp;
		}

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

	bool Model::Update(){
		time++;
		PokemonCenter* Ctemp;
		PokemonGym* Gtemp;
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
				num_gyms_defeated += 1;
			}
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


