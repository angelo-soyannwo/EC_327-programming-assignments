
#include "Trainer.h"
#include "PokemonGym.h"
#include "PokemonCenter.h"
#include <time.h>

	
	Trainer::Trainer():GameObject('T'){
		speed = 5;
		std::cout<<"Trainer default constructed"<<std::endl;
	}

	Trainer::Trainer(char in_code):GameObject(in_code){
		speed = 5;
		state = STOPPED;
		std::cout<<"Trainer constructed"<<std::endl;
	}

	Trainer::Trainer(std::string in_name,int in_id,char in_code,unsigned int in_speed, Point2D in_loc):GameObject(in_loc, in_id, in_code){
		speed = in_speed;
		name = in_name;
		std::cout<<"Trainer constructed"<<std::endl;
	}

	bool Trainer::UpdateLocation(){
		Vector2D current_dist  = destination - location;
		if(location.x == destination.x &&  location.y == destination.y) {
			std::cout<<display_code<<" "<<GetId() << ": I'm there!"<<std::endl;
			return true;
		}

		if (fabs(current_dist.x) <= fabs(delta.x) && location.x != destination.x){
			location.x = destination.x;
		}
		else{
			location.x = location.x + delta.x;
		}

		if( fabs(current_dist.y) <= fabs(delta.y) && location.y != destination.y){
			location.y = destination.y;
		}
		else{
			location.y = location.y + delta.y;
		}
		std::cout<<display_code<<" "<< GetId() <<": step..."<<std::endl;
		return false;
	}

	void Trainer::SetupDestination(Point2D dest){
		destination = dest;
		delta = (destination - location) * (speed / GetDistanceBetween(destination, location));
	}
	
	void Trainer::StartMoving(Point2D dest){
		SetupDestination(dest);
		if (location.x == dest.x && location.y == dest.y){
			std::cout<<display_code<<" "<< GetId() << ": I’m already there. See?"<<std::endl;
		}
		else if (state == FAINTED) {
			std::cout<<display_code<<" "<< GetId() <<": My pokemon have fainted. I may not move."<<std::endl;
		}
		else{
			if(state == IN_GYM){
				current_gym->RemoveOneTrainer();
			}
			if(state == AT_CENTER){
				current_center->RemoveOneTrainer();
			}
			state = MOVING;	
			std::cout<<display_code<<" "<<GetId()<<" "<<" On my way."<<std::endl;
		}
		
	}

	void Trainer::StartMovingToGym(PokemonGym* gym){
		Point2D dest = (*gym).GetLocation();
		SetupDestination(dest);
		current_gym = gym;
		if (location.x == dest.x && location.y == dest.y){
			std::cout<<display_code<<" "<< GetId() <<": I’m already at the PokemonGym!"<<std::endl;
		}
		else if (state == FAINTED) {
			std::cout<<display_code<<" "<< GetId() <<": My pokemon have fainted so I can’t move to gym..."<<std::endl;
		}
		else{
			if(state == IN_GYM){
				current_gym->RemoveOneTrainer();
			}
//potetital edgecase
			if(state == AT_CENTER){
				current_center->RemoveOneTrainer();
			}
			state = MOVING_TO_GYM;
			std::cout<<display_code<<" "<< GetId() <<": On my way to gym "<<(*gym).GetId()<<std::endl;
		}

		



	}

	void Trainer::StartMovingToCenter(PokemonCenter* center){
		Point2D dest = (*center).GetLocation();
		current_center = center;
		SetupDestination(dest);
		if (location.x == dest.x && location.y == dest.y){
			std::cout<<display_code<<" "<< GetId() <<": I’m already at the Center!"<<std::endl;
		}
		else if (state == FAINTED) {
			std::cout<<display_code<<" "<< GetId() <<": My pokemon have fainted so I should have gone to the center..."<<std::endl;
		}
		else{
			if(state == IN_GYM){
				current_gym->RemoveOneTrainer();
			}

			if(state == AT_CENTER){
				current_center->RemoveOneTrainer();
			}
			state = MOVING_TO_CENTER;
			std::cout<<display_code<<" "<< GetId() <<": On my way to Center ("<<(*center).GetId()<<")"<<std::endl;
		}
	}

	bool Trainer::HasFainted(){
		if (health == 0){
			return true;
		}
		return false;
	}

	bool Trainer::ShouldBeVisible(){
		if (state==FAINTED){
			return false;
		}
		return true;
	}

	void Trainer::StartBattling(unsigned int num_battles){

		
		if (HasFainted()){
			std::cout<<display_code<<id_num<<": "<<" My Pokemon have fainted so no more battles for me..."<<std::endl;
		}
		else if (state != IN_GYM){
			std::cout<<display_code<<id_num<<": "<<"I can only battle in a PokemonGym!"<<std::endl;
		}
		else if (PokeDollars < (*current_gym).GetPokeDollarCost(num_battles)){
			 std::cout<<display_code<<id_num<<": "<<"Not enough money for battles"<<std::endl;
		}
		else if((*current_gym).passed()){
			std::cout<<display_code<<id_num<<": "<<"Cannot battle! This PokemonGym has no more trainers to battle!"<<std::endl;
		}
		else{
			if(num_battles > (*current_gym).GetNumBattlesRemaining()){
				num_battles = (*current_gym).GetNumBattlesRemaining();
			}
			state = BATTLING_IN_GYM;
			battles_to_buy = num_battles;
			std::cout<<display_code<<id_num<<": "<<"Started to battle at the PokemonGym "<<(*current_gym).GetId()<<" with "<<(*current_gym).GetNumBattlesRemaining();
			std::cout<<" battles"<<std::endl;
		}
	}

	void Trainer::StartRecoveringHealth(unsigned int num_potions){


		if (state != AT_CENTER){
			std::cout<<display_code<<id_num<<": I can only recover at a Pokemon Center!"<<std::endl;
		}
		else if (PokeDollars < (*current_center).GetPokeDollarCost(num_potions)){
			std::cout<<display_code<<id_num<<": Not enough money to recover health."<<std::endl;
		}
		else if (current_center->GetNumPotionRemaining() < 1){
			std::cout<<display_code<<id_num<<": Cannot recover! No potion remaining in this Pokemon Center"<<std::endl;
		}
		else{
			if(num_potions > (*current_center).GetNumPotionRemaining()){
				num_potions = (*current_center).GetNumPotionRemaining();
			}
			state = RECOVERING_HEALTH;
			std::cout<<display_code<<id_num<<": "<<"Started recovering " <<num_potions << " potions at Pokemon Center " << current_center->GetId()<< " "<<std::endl;
			potions_to_buy = num_potions;
		}
	}


	void Trainer::ShowStatus(){
		std::cout<<"("<<name<<") status: "<<std::endl;
		std::cout<<"Health: "<<health<<std::endl;
		std::cout<<"PokeDollars: "<<PokeDollars<<std::endl;
		std::cout<<"Experience: "<<experience<<std::endl;
		GameObject::ShowStatus();
			
		switch(state){
			case ((char) STOPPED):
				std::cout<<" stopped"<<std::endl;
				break;
			case ((char) MOVING):
				std::cout<<" moving at a speed of "<< speed << " to destination "<< destination << " at each step of delta " << delta <<"."<<std::endl;
				break;
			case ((char) MOVING_TO_GYM):
				 std::cout<<"heading to PokemonGym " << (*current_gym).GetId() << " at a speed of " << speed << " at each step of " << delta<<"."<<std::endl;
				break;
			case ((char) MOVING_TO_CENTER):
				std::cout<<"heading to Pokemon Center " <<(*current_center).GetId() << " at a speed of " << speed << " at each step of " << delta<<"."<<std::endl;
				break;
			case ((char) IN_GYM):
				std::cout<<" inside PokemonGym " <<  (*current_gym).GetId()<<"."<<std::endl; 
				break;
			case ((char) AT_CENTER):
				std::cout<<" inside Pokemon Center " << (*current_center).GetId()<<"."<<std::endl;
				break;
			case ((char) BATTLING_IN_GYM):	
				std::cout<<" battling in PokemonGym " << (*current_gym).GetId()<<"."<<std::endl;
				break;
			case ((char) RECOVERING_HEALTH):
				std::cout<<" recovering health in Pokemon Center " << (*current_center).GetId()<<"."<<std::endl;
				break;
			default:
				break;
			
		}
		
	}

	bool Trainer::Update(){
		unsigned int exp;
		unsigned int health_boost;
		unsigned int health_loss;
		bool val;

		//Check if this should be in thw switch statement
		switch(state){
			case ((char) STOPPED):
			  //std::cout<<name<<" status:"<<std::endl;
			  //std::cout<<"Health: "<<health<<std::endl;
			  //	std::cout<<"PokeDollars: "<<PokeDollars<<std::endl;
			  //	std::cout<<"Experience: "<<experience<<std::endl;

				val = false;
				return false;
				//UpdateLocation();
				break;

			case ((char) MOVING):
			  //	std::cout<<name<<" status:"<<std::endl;
			  //	std::cout<<"Health: "<<health<<std::endl;
			  //	std::cout<<"PokeDollars: "<<PokeDollars<<std::endl;
			  //	std::cout<<"Experience: "<<experience<<std::endl;

				//update health and pokeDollars
				health -= 1;
				if(health == 0 ){
					state = FAINTED;
				} 
				PokeDollars += GetRandomAmountOfPokeDollars();
				//GameObject::ShowStatus();
				if (UpdateLocation()) {
					state = STOPPED;
					val = true;
					return true;
				}
				break;

			case ((char) MOVING_TO_GYM):
			  //	std::cout<<name<<" status:"<<std::endl;
			  //	std::cout<<"Health: "<<health<<std::endl;
			  //	std::cout<<"PokeDollars: "<<PokeDollars<<std::endl;
			  //	std::cout<<"Experience: "<<experience<<std::endl;

				//update health and pokeDollars
				health -= 1;
				if(health == 0 ){
					state = FAINTED;
				} 
				PokeDollars += GetRandomAmountOfPokeDollars();

				if (UpdateLocation()) {
					state = IN_GYM;
					current_gym->AddOneTrainer();
					val = true;
					return true;
				}
				break;
	
			case ((char) MOVING_TO_CENTER):
			  //	std::cout<<name<<" status:"<<std::endl;
			  //	std::cout<<"Health: "<<health<<std::endl;
			  //	std::cout<<"PokeDollars: "<<PokeDollars<<std::endl;
			  //	std::cout<<"Experience: "<<experience<<std::endl;

				health -= 1;
				PokeDollars += GetRandomAmountOfPokeDollars();

				if(health == 0 ){
					state = FAINTED;
				} 
				if (UpdateLocation()) {
					state = AT_CENTER;
					current_center->AddOneTrainer();
					val = true;
					return true;
				}
				break;

			case ((char) IN_GYM):
			  //	std::cout<<name<<" status:"<<std::endl;
			  //	std::cout<<"Health: "<<health<<std::endl;
			  //	std::cout<<"PokeDollars: "<<PokeDollars<<std::endl;
			  //	std::cout<<"Experience: "<<experience<<std::endl;


				val = false;
				return false;
				break;

			case ((char) AT_CENTER):
			  //	std::cout<<name<<" status:"<<std::endl;
			  //	std::cout<<"Health: "<<health<<std::endl;
			  //	std::cout<<"PokeDollars: "<<PokeDollars<<std::endl;
				//	std::cout<<"Experience: "<<experience<<std::endl;


				val = false;
				return false;
				break;

			case ((char) BATTLING_IN_GYM):
			  //	std::cout<<name<<" status:"<<std::endl;
			  //	std::cout<<"Health: "<<health<<std::endl;
			  //	std::cout<<"PokeDollars: "<<PokeDollars<<std::endl;
			  //	std::cout<<"Experience: "<<experience<<std::endl;

				health_loss= (*current_gym).GetHealthCost(battles_to_buy);
				if (health_loss > health){
					health = 0;
				}
				else{
					health = health - health_loss;
				}
				PokeDollars -=(*current_gym).GetPokeDollarCost(battles_to_buy);			
				exp = (*current_gym).TrainPokemon(battles_to_buy);
				experience += exp;
				std::cout<<"**"<<name<<" completed "<< battles_to_buy << " battle(s)!**"<<std::endl;
				std::cout<<"**"<<name<<" gained "<< exp << " experience!**"<<std::endl;
				state = IN_GYM;
				if(health == 0 ){
					state = FAINTED;
				} 
				val = true;
				return true;
				break;

			case ((char) RECOVERING_HEALTH):
			  //	std::cout<<name<<" status:"<<std::endl;
			  //	std::cout<<"Health: "<<health<<std::endl;
			  //	std::cout<<"PokeDollars: "<<PokeDollars<<std::endl;
			  //	std::cout<<"Experience: "<<experience<<std::endl;

				health_boost = 5*potions_to_buy;
				health += health_boost;
				PokeDollars -= (*current_center).GetPokeDollarCost(potions_to_buy);
				potions_to_buy = (*current_center).DistributePotion(potions_to_buy);
				std::cout<<"**"<<name<<" recovered " << health_boost << " health!**"<<std::endl;
				std::cout<<"**"<<name<<" bought " << potions_to_buy << " Potion(s)!**"<<std::endl;
				//UpdateLocation();
				state = AT_CENTER;
				val = true;
				return true;
				break;
		}
		return val;
	}

	void Trainer::Stop(){
		state = STOPPED;
		std::cout<<"("<<display_code<<")("<<id_num<<"): Stopping"<<std::endl;
	}

	double GetRandomAmountOfPokeDollars(){
		double f = (double) ( rand()%3);
    		return f;
	}


	std::string Trainer::GetName(){
		return name;
	}

	PokemonGym* Trainer::GetCurrentGym(){
		return current_gym;
	}

	PokemonCenter* Trainer::GetCurrentCenter(){
		return current_center;
	}

	Point2D Trainer::GetDestination(){
		return destination;
	}

	void Trainer::PokemonDecreaseTrainerHealth(double attackValue){
		health -= attackValue;
	}

	Point2D Trainer::GetLocation(){
		return location;
	}

	Trainer::~Trainer(){
		std::cout<<"Trainer Destructed"<<std::endl;
	}


