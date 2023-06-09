

#ifndef WildPokemon_H
#define WildPokemon_H

#include <cmath>
#include <fstream>
#include <iostream>
#include "Trainer.h"


class WildPokemon: public GameObject{

	protected:
	double attack;
	double health;
	bool variant;
	bool in_combat;
	Trainer* current_trainer;
	std::string name;


	public:
	WildPokemon (std::string name, double attack, double health, bool variant, int id, Point2D in_loc);
	void follow(Trainer* t);
	bool get_variant();
	double get_attack();
	double get_health();
	bool get_in_combat();
	bool ShouldBeVisible();
	bool Update();
	void ShowStatus();
	bool IsAlive();
	~WildPokemon();

};

enum WildPokemonStates {

  DEAD = 0,
  IN_ENVIRONMENT = 1,
  IN_TRAINER = 2,
  
};

#endif
