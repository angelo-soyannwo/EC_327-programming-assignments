#ifndef MODEL_H
#define MODEL_H

#include <iostream>
#include "PokemonGym.h"
#include "PokemonCenter.h"
#include "Trainer.h"
#include "View.h"

class Model {
	private:
		int time;
		int num_objects;
		int num_trainers;
		int num_centers;
		int num_gyms;
		GameObject * object_ptrs[10];
		PokemonGym * gym_ptrs[10];
		PokemonCenter * center_ptrs[10];
		Trainer * trainer_ptrs[10];

	public:
		Model();

		~Model();
		void destroy();

		Trainer * GetTrainerPtr(int id);

		PokemonCenter * GetPokemonCenterPtr(int id);

		PokemonGym * GetPokemonGymPtr(int id);

		bool Update();

		void Display(View &view);

		bool is_valid_trainer(int id);
		bool is_valid_center(int id);
		bool is_valid_gym(int id);

		void ShowStatus();
};

#endif
