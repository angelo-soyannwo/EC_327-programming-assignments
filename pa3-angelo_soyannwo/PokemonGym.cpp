
#include "PokemonGym.h"


	PokemonGym::PokemonGym():Building(){
		display_code = 'G';
		max_number_of_battles = 10;
		num_battle_remaining = max_number_of_battles;
		health_cost_per_battle = 1;
		PokeDollar_cost_per_battle = 1.0;
		experience_per_battle = 2;

		state = NOT_DEFEATED;
		std::cout<<"PokemonGym default constructed"<<std::endl;
	}

	PokemonGym::PokemonGym(unsigned int max_battle, unsigned int health_loss, double PokeDollar_cost, unsigned int exp_per_battle, int in_id, Point2D in_loc):Building(){
		display_code = 'G';
		max_number_of_battles = max_battle;
		num_battle_remaining = max_number_of_battles;
		health_cost_per_battle = health_loss;
		PokeDollar_cost_per_battle = PokeDollar_cost;
		experience_per_battle = exp_per_battle;
		location = in_loc;
		id_num = in_id;

		state = NOT_DEFEATED;
		std::cout<<"PokemonGym constructed"<<std::endl;

	}

	double PokemonGym::GetPokeDollarCost(unsigned int battle_qty){
		return battle_qty * PokeDollar_cost_per_battle;
	}

	unsigned int PokemonGym::GetHealthCost(unsigned int battle_qty){
		return battle_qty * health_cost_per_battle;
	}

	unsigned int PokemonGym::GetNumBattlesRemaining(){

		return num_battle_remaining;

	}

	bool PokemonGym::IsAbleToBattle(unsigned int battle_qty, double budget, unsigned int health){

		if(battle_qty*PokeDollar_cost_per_battle <= budget && health_cost_per_battle*battle_qty <= health){
			return true;
		}
		return false;
	}
	
	unsigned int PokemonGym::TrainPokemon(unsigned int battle_units){
		
		unsigned int exp;
		if (num_battle_remaining >= battle_units){
			exp = battle_units *experience_per_battle;
			num_battle_remaining = num_battle_remaining - battle_units;
			return exp;
		}
		exp = num_battle_remaining * experience_per_battle;
		num_battle_remaining = 0;
		return exp;
	}
	bool PokemonGym::update(){

		if (state == NOT_DEFEATED){
				if(num_battle_remaining == 0){
					state = DEFEATED;
					display_code = 'g';
					std::cout<<"("<<display_code<<")"<<"("<<id_num<<")"<<"has been beaten";
					return true;
				}

				else{
					return false;
				}
		}
		return false;
	}

	bool PokemonGym::passed(){
		if(num_battle_remaining == 0){
			return true;
		}
		return false;
	}
	void PokemonGym::ShowStatus(){

		std::cout<<"PokemonGymStatus: "<<std::endl;
		Building::ShowStatus();
		std::cout<<"Max number of battles: ("<<max_number_of_battles<<")"<<std::endl;
		std::cout<<"Health cost per battle: ("<<health_cost_per_battle<<")"<<std::endl;
		std::cout<<"PokeDollar per battle: ("<<PokeDollar_cost_per_battle<<")"<<std::endl;
		std::cout<<"Experience per battle: ("<<experience_per_battle<<")"<<std::endl;
		std::cout<<" Health cost per battle"<<"("<<health_cost_per_battle<<")"<<std::endl;
		
	}
	
	bool PokemonGym::ShouldBeVisible(){
		return true;
	}
	
	PokemonGym::~PokemonGym(){
		std::cout<<"PokemonGym Destructed"<<std::endl;
	}





