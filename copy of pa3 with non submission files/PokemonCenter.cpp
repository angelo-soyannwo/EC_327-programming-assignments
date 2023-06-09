

#include "PokemonCenter.h"

	PokemonCenter::PokemonCenter():Building(){
		display_code = 'C';
		potion_capacity = 100;
		num_potions_remaining = potion_capacity;
		pokedollar_cost_per_potion = 5;

		state = POTIONS_AVAILABLE;
		std::cout<<"PokemonCenter default constructed"<<std::endl;

	}

	PokemonCenter::PokemonCenter(int in_Id, double potion_cost, unsigned int potion_cap, Point2D in_loc):Building(){
		display_code = 'C';

		id_num = in_Id;
		location = in_loc;

		potion_capacity = potion_cap;
		num_potions_remaining = potion_capacity;
		pokedollar_cost_per_potion = potion_cost;

		state = POTIONS_AVAILABLE;
		std::cout<<"PokemonCenter constructed"<<std::endl;		

		
	}

	bool PokemonCenter::HasPotions(){
		if (num_potions_remaining == 1){
			return true;
		}
		else {
			return false;
		}
	}
	unsigned int PokemonCenter::GetNumPotionRemaining(){
		return num_potions_remaining;
	}

	bool PokemonCenter::CanAffordPotion(unsigned int potion,double budget){
		if (potion <= budget){
			return true;
		}
		else {
			return false;
		}
	}

	double PokemonCenter::GetPokeDollarCost(unsigned int potion){
		return pokedollar_cost_per_potion * potion;
	}


	unsigned int PokemonCenter::DistributePotion(unsigned int potion_needed){
		if (potion_needed <= num_potions_remaining){
			num_potions_remaining = num_potions_remaining - potion_needed;
			return potion_needed;
		}
		potion_needed = num_potions_remaining;
		num_potions_remaining = 0;
		return potion_needed;
	}
	bool PokemonCenter::update(){
	
		if (state == POTIONS_AVAILABLE){
			if (num_potions_remaining == 0){
				state = NO_POTIONS_AVAILABLE;
				display_code = 'c';
				std::cout<<"PokemonCenter " << GetId() << " has ran out of potions."<<std::endl;
				return true;
			}
			else{
				state = POTIONS_AVAILABLE;
				return false;		
			}
		}
		return false;
	}

	bool PokemonCenter::ShouldBeVisible(){
		return true;
	}

	void PokemonCenter::ShowStatus(){

		std::cout<<"PokemonCenter Status: "<<std::endl;
		Building::ShowStatus();
		std::cout<<"PokeDollars per potion: "<< pokedollar_cost_per_potion <<std::endl;
		std::cout<<"has " << num_potions_remaining <<  " potion(s) remaining."<<std::endl;
	}

	PokemonCenter::~PokemonCenter(){
		std::cout<<"PokemonCenter Destructed"<<std::endl;
	}
