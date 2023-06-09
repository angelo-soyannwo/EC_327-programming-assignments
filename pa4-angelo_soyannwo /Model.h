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

		int time;
/*		int num_objects;
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

		std::list<GameObject*> active_ptrs;

		std::list<GameObject*> object_ptrs;
		std::list<GameObject*>::iterator object_iterator;

		std::list<Trainer*> trainer_ptrs;
		std::list<Trainer*>::iterator trainer_iterator;

		std::list<PokemonCenter*> center_ptrs;
		std::list<PokemonCenter*>::iterator center_iterator;

		std::list<PokemonGym*> gym_ptrs;
		std::list<PokemonGym*>::iterator gym_iterator;

		std::list<WildPokemon*> wildpokemon_ptrs;
		std::list<WildPokemon*>::iterator wildpokemon_iterator;

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

		void ShowStatus();

/*		bool is_valid_trainer(int id);
		bool is_valid_center(int id);
		bool is_valid_gym(int id);
*/

		//PA4 addtions

		bool IsValidId(int id, char c);
		void NewCommand(char type, int id, Point2D p);
		GameObject* GetGameObjectPtr(int id);
		GameObject* GetActiveGameObjectPtr(int id);
};

#endif
