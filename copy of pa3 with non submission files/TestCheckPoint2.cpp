
#include "Building.h"
#include "PokemonCenter.h"
#include "PokemonGym.h"

int main(){
	Point2D origin = Point2D(0, 0);

	//default constructor
	std::cout<< "default constructor test"<<std::endl;
	Building a = Building(); std::cout<<std::endl;	
	std::cout<<"default_building trainer count: "<<a.getTrainerCount()<<std::endl;
	a.AddOneTrainer();
	std::cout<<"default_building trainer count: "<<a.getTrainerCount()<<std::endl;
	a.RemoveOneTrainer();
	std::cout<<"default_building trainer count: "<<a.getTrainerCount()<<std::endl;

	std::cout<<std::endl<<std::endl;

	//second constructor
	Building b = Building('B', 1, origin);
	std::cout<< "second constructor test"<<std::endl;
	std::cout<<"default_building trainer count: "<<b.getTrainerCount()<<std::endl;
	b.AddOneTrainer();
	std::cout<<"default_building trainer count: "<<b.getTrainerCount()<<std::endl;
	b.RemoveOneTrainer();
	std::cout<<"default_building trainer count: "<<b.getTrainerCount()<<std::endl<<std::endl;
/*
	//Pokemon center tests
	//Default Constructor
	
	std::cout<<"Pokemon Center Tests"<<std::endl<<"default constructor test"<<std::endl;
	PokemonCenter pc1 = PokemonCenter(); std::cout<<std::endl;	
	std::cout<<"default_pokemon_center trainer count: "<< pc1.getTrainerCount()<<std::endl;
	pc1.AddOneTrainer();
	std::cout<<"default_pokemon_center trainer count: "<<pc1.getTrainerCount()<<std::endl;
	pc1.RemoveOneTrainer();
	std::cout<<"default_pokemon_center trainer count: "<<pc1.getTrainerCount()<<std::endl;

	pc1.ShowStatus();	
	std::cout<<std::endl;

	pc1.update();
	pc1.AddOneTrainer();
	pc1.DistributePotion(105);
	pc1.ShowStatus();

	//Non default Constructor
	std::cout<<std::endl<<"Non-default constructor test"<<std::endl;
	PokemonCenter pc2 = PokemonCenter(1, 4, 60, origin); std::cout<<std::endl;	
	std::cout<<"default_pokemon_center trainer count: "<< pc2.getTrainerCount()<<std::endl;
	pc2.AddOneTrainer();
	std::cout<<"default_pokemon_center trainer count: "<<pc2.getTrainerCount()<<std::endl;
	pc2.RemoveOneTrainer();
	std::cout<<"default_pokemon_center trainer count: "<<pc2.getTrainerCount()<<std::endl;

	pc2.ShowStatus();	
	std::cout<<std::endl;

	pc2.update();
	pc2.AddOneTrainer();
	pc2.DistributePotion(105);
	pc2.ShowStatus(); std::cout<<std::endl;
*/
	//Pokemon Gym
	std::cout<<"Pokemon Gym Tests"<<std::endl<<"default constructor test"<<std::endl;
	PokemonGym pg1 = PokemonGym(); std::cout<<std::endl;	
	std::cout<<"default_pokemon_gym trainer count: "<< pg1.getTrainerCount()<<std::endl;
	pg1.AddOneTrainer();
	std::cout<<"default_pokemon_gym trainer count: "<<pg1.getTrainerCount()<<std::endl;
	pg1.RemoveOneTrainer();
	std::cout<<"default_pokemon_gym trainer count: "<<pg1.getTrainerCount()<<std::endl;

	pg1.ShowStatus();	
	std::cout<<std::endl;

	pg1.update();
	pg1.AddOneTrainer();
	std::cout<<"Num battles remaining: " <<pg1.GetNumBattlesRemaining()<<std::endl;
	pg1.TrainPokemon(5);
	std::cout<<"Num battles remaining: " <<pg1.GetNumBattlesRemaining()<<std::endl;
	pg1.ShowStatus();

	//Non default Constructor
	std::cout<<std::endl<<"Non-default constructor test"<<std::endl;
	PokemonGym pg2 = PokemonGym(10, 5, 1, 5, 10, origin); std::cout<<std::endl;	
	std::cout<<"default_pokemon_gym trainer count: "<< pg2.getTrainerCount()<<std::endl;
	pg2.AddOneTrainer();
	std::cout<<"default_pokemon_gym trainer count: "<<pg2.getTrainerCount()<<std::endl;
	pg2.RemoveOneTrainer();
	std::cout<<"default_pokemon_gym trainer count: "<<pg2.getTrainerCount()<<std::endl;

	pg2.ShowStatus();	
	std::cout<<std::endl;

	pg2.update();
	pg2.AddOneTrainer();
	std::cout<<"Num battles remaining: " <<pg2.GetNumBattlesRemaining()<<std::endl;
	pg2.TrainPokemon(5);
	std::cout<<"Num battles remaining: " <<pg2.GetNumBattlesRemaining()<<std::endl;
	pg2.ShowStatus();

	return 0;
}
