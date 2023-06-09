#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "Point2D.h"
#include "Vector2D.h"
#include <cmath>
#include <fstream>
#include <iostream>

class GameObject{

	protected:
	Point2D location;
	int id_num;
	char display_code;
	char state;

	public:
	GameObject(char in_code);
	GameObject(Point2D in_loc, int in_id,char in_code);
	Point2D GetLocation();
	void set_display_code(char);
	int GetId();
	virtual bool Update() = 0;
	char GetState();
	virtual void ShowStatus();
	virtual bool ShouldBeVisible() = 0;
	void DrawSelf(char * ptr);

	//PA4 additions
	char GetCode();

	virtual ~GameObject();

};



#endif
