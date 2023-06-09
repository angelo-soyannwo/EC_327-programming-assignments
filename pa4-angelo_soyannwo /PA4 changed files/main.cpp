#include <iostream>
#include <cmath>
#include "Point2D.h"
#include "Vector2D.h"
#include "GameObject.h"
#include "Building.h"
#include "PokemonCenter.h"
#include "Model.h"
#include "GameCommand.h"
#include "View.h"

using namespace std;

int main() {
	Model m;
	View v;
	char in_user;
	int ID;
	int x, y;
	int ID1, ID2;
	unsigned int potion_amount;
	unsigned int battle_amount;

 	while(true) {
		m.Display(v);
		cout << "Enter the game command: " << endl;
		cin >> in_user;
		try{
		switch(in_user) {
			case 'm':
				cin >> ID; 
				cin >> x; 
				cin >> y;
				DoMoveCommand(m, ID, Point2D(x, y));
				break;

			case 'c':
				cin >> ID1 >> ID2;
				DoMoveToCenterCommand(m, ID1, ID2);
				break;

			case 'g':
				cin >> ID1 >> ID2;
				DoMoveToGymCommand(m, ID1, ID2);
				break;

			case 's':
				cin >> ID;
				DoStopCommand(m, ID);
				break;

			case 'b':
				cin >> ID >> potion_amount;
				DoBattleCommand(m, ID, potion_amount);
				break;

			case 'p':
				cin >> ID >> battle_amount;
				DoRecoverInCenterCommand(m, ID, battle_amount);
				break;
		
			case 'a':
				DoAdvanceCommand(m, v);
				break;

			case 'r':
				DoRunCommand(m, v);
			break;

			case 'q':
			m.destroy();
			exit(0);
			break;
		}   

	}
	}
	catch (Invalid_Input& except){
		cout << "Invalid input - " << except.msg_ptr << endl;
	}

  return 0;
}
