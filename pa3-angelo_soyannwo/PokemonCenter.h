
#ifndef POKEMONCENTER_H
#define POKEMONCENTER_H

#include <cmath>
#include <fstream>
#include <iostream>
#include "Building.h"

class PokemonCenter: public Building{

	private:
	unsigned int potion_capacity;
	unsigned int num_potions_remaining;
	double pokedollar_cost_per_potion;


	public:
	PokemonCenter();
	PokemonCenter(int in_Id, double potion_cost, unsigned int potion_cap, Point2D in_loc);

	bool HasPotions();
	unsigned int GetNumPotionRemaining();
	bool CanAffordPotion(unsigned int potion,double budget);
	double GetPokeDollarCost(unsigned int potion);
	unsigned int DistributePotion(unsigned int potion_needed);
	bool update();
	bool ShouldBeVisible();
	void ShowStatus();
	~PokemonCenter();

};

enum PokemonCenterStates {
	POTIONS_AVAILABLE = 1, 
	NO_POTIONS_AVAILABLE = 0
};

#endif
