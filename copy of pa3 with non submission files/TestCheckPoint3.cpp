
#include "Trainer.h"

int main(){
	Point2D origin = Point2D(0, 0);
	Point2D secondPoint = Point2D(5, 5);
	Point2D thirdPoint = Point2D(0, 1);
	PokemonGym pg1 = PokemonGym(10, 5, 1, 5, 10, thirdPoint); std::cout<<std::endl;
	PokemonGym* g =&pg1; 	
	std::string name = "Angelo";

	PokemonCenter pc1 = PokemonCenter(1, 4, 60, thirdPoint); std::cout<<std::endl;
	PokemonCenter* c = &pc1;
	Trainer a = Trainer(name, 1, 'T', 5, origin);
	Trainer b = Trainer("ben", 1, 'e', 5, origin);
	a.ShowStatus();
	a.ShowStatus();
	a.StartMovingToGym(&pg1);
	a.ShowStatus();
	a.Update();
	a.Update();
	a.Update();
	a.ShowStatus();

	a.Update();
	a.Update();

	b.ShowStatus();
	b.StartMovingToCenter(c);
	b.Update();
	b.Update();
	b.Update();
	b.Update();
	b.ShowStatus();


/*
	srand(time(NULL));
	std::cout<<"___"<<std::endl<<GetRandomAmountOfPokeDollars()<<std::endl<<"___"<<std::endl;
	std::cout<<"___"<<std::endl<<GetRandomAmountOfPokeDollars()<<std::endl<<"___"<<std::endl;
	std::cout<<"___"<<std::endl<<GetRandomAmountOfPokeDollars()<<std::endl<<"___"<<std::endl;

*/
	

	return 0;
}
