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
#include "Input_Handling.h"

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
		try{

			m.Display(v);
			cout << "Enter the game command: " << endl;
			in_user = get_char();
			switch(in_user) {
				case 'm':
					ID = get_int(m, 'T');
					x = get_int();
					y = get_int();
					DoMoveCommand(m, ID, Point2D(x, y));
					break;

				case 'c':
					ID1 = get_int(m, 'T');
					ID2 = get_int(m, 'C');
					DoMoveToCenterCommand(m, ID1, ID2);
					break;

				case 'g':
					ID1 = get_int(m, 'T');
					ID2 = get_int(m, 'G');
					DoMoveToGymCommand(m, ID1, ID2);
					break;

				case 's':
					ID = get_int(m, 'T');
					DoStopCommand(m, ID);
					break;

				case 'b':
					ID = get_int(m, 'T');
					potion_amount = get_unsigned_int();
					DoBattleCommand(m, ID, potion_amount);
					break;

				case 'p':
					ID = get_int(m, 'T');
					battle_amount = get_unsigned_int();
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

		catch (Invalid_Input& except){
			cout << "Invalid input - " << except.msg_ptr << endl;
		}
	}
	return 0;
}
