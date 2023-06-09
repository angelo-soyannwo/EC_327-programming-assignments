

#ifndef BUILDING_H
#define BUILDING_H

#include <cmath>
#include <fstream>
#include <iostream>
#include "GameObject.h"

class Building: public GameObject{

	private:
	unsigned int trainer_count=0;

	public:
	Building();
	Building(char in_code, int in_Id, Point2D in_loc);
	void AddOneTrainer();

	void RemoveOneTrainer();
	void ShowStatus();
	bool ShouldBeVisible();
	bool Update();
	double getTrainerCount();
	~Building();

};


#endif
