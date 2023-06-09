#ifndef MODEL_H
#define MODEL_H

#include <iostream>
#include "PokemonGym.h"
#include "PokemonCenter.h"
#include "Trainer.h"
#include "WildPokemon.h"
#include "View.h"
#include <list>
#include "Input_Handling.h"

class Model {
	private:

/*		int time;
		int num_objects;
		int num_trainers;
		int num_centers;
		int num_gyms;
		int num_wildpokemon = 2;
		GameObject * object_ptrs[10];
		PokemonGym * gym_ptrs[10];
		PokemonCenter * center_ptrs[10];
		Trainer * trainer_ptrs[10];
		WildPokemon * wildpokemon_ptrs[10];
*/

		list<GameObject*> active_ptrs;

		list<GameObject*> object_ptrs;
		list<GameObject*>::iterator object_iterator;

		list<Trainer*> trainer_ptrs;
		list<Trainer*>::iterator traineri;

		list<PokemonCenter*> center_ptrs;
		list<PokemonCenter*>::iterator center_iterator;

		list<PokemonGym*> gym_ptrs;
		list<PokemonGym*>::iterator gym_iterator;

		list<WildPokemon*> wildpokemon_ptrs;
		list<WildPokemon*>::iterator wild_iterator;

	public:
		Model();

		~Model();
		void destroy();

		Trainer * GetTrainerPtr(int id);

		PokemonCenter * GetPokemonCenterPtr(int id);

		PokemonGym * GetPokemonGymPtr(int id);

		WildPokemon* GetWildPokemonPtr(int id);

		bool Update();

		void Display(View &view);

		bool is_valid_trainer(int id);
		bool is_valid_center(int id);
		bool is_valid_gym(int id);

		void ShowStatus();
};

#endif
