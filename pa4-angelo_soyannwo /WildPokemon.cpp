#include "WildPokemon.h"

using namespace std;
  
WildPokemon::WildPokemon(std::string name, double attack, double health, bool variant, int id, Point2D in_loc):GameObject(in_loc, id, 'W') {

	this->name = name;
	this->health = health;
	this->attack = attack;
	state = IN_ENVIRONMENT;
	variant = variant;

	std::cout<<"WildPokemon constructed"<< std::endl;

}
    
void WildPokemon::follow(Trainer* t) {

	if(state == IN_ENVIRONMENT){
		current_trainer = t;
		state = IN_TRAINER;
	}


}
  
bool WildPokemon::get_variant(){
	return variant;
}
  
double WildPokemon::get_attack(){
	return attack;
}
  
double WildPokemon::get_health() {
	return health;
}
  
bool WildPokemon::get_in_combat(){

	if(state == IN_TRAINER){
		in_combat = true;
	}
	else{
		in_combat = false;
	}

	return in_combat;
}
  
bool WildPokemon::Update() {

	if (state == DEAD){
		in_combat = false;
		return false;
	}
	if(!IsAlive()){
                state = DEAD;
                return true;
        }


	if(state == IN_ENVIRONMENT){
		return false;
	}

	if(state == IN_TRAINER){
		health--;
		current_trainer->PokemonDecreaseTrainerHealth(attack);
		location = current_trainer->GetLocation();
		return true;
	}

	return false;

}
    
void WildPokemon::ShowStatus() {
	std::cout<<"WildPokemon Status:"<<std::endl;
	GameObject::ShowStatus();

	switch(state) {
	case ((char) DEAD):
		std::cout<<display_code<<id_num<<": is dead" << std::endl;
		break;

	case ((char) IN_ENVIRONMENT):
		std::cout<<display_code<<id_num<<": is in the environment"<<std::endl;
		break;

	case ((char) IN_TRAINER):
		std::cout<< display_code << id_num<< ": is following "<<(*current_trainer).GetName()<<std::endl; 
		break;
	}
}
  
bool WildPokemon::IsAlive() {
	if (health <= 0) {
		return false;
	}
	else {
		return true;
	}
}


bool WildPokemon::ShouldBeVisible(){
	bool var = IsAlive();
	if (var == true && state == IN_ENVIRONMENT){
		return true;
	}
	else{
		return false;
	}

}
 
WildPokemon::~WildPokemon() {
  std::cout<<"WildPokemon Destructed"<<std::endl;
}


  

