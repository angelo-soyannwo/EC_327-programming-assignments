#ifndef GAMECOMMAND_H
#define GAMECOMMAND_H

#include <iostream>
#include "Point2D.h"
#include "Vector2D.h"
#include "Model.h"


void DoMoveCommand(Model & model, int trainer_id, Point2D p1);
void DoMoveToCenterCommand(Model & model, int trainer_id, int center_id);
void DoMoveToGymCommand(Model & model, int trainer_id, int gym_id);
void DoStopCommand(Model & model, int trainer_id);
void DoBattleCommand(Model & model, int trainer_id, unsigned int battles);
void DoRecoverInCenterCommand(Model & model, int trainer_id, unsigned int potions_needed);
void DoAdvanceCommand(Model& model, View& view);
void DoRunCommand(Model& model, View& view);

unsigned int get_unsigned_int();
char get_char();
int get_int();
int get_int(Model & model, char c);
int get_id_int(Model & model, char c);
void DoCreateCommand(Model & model, char type, int id, Point2D p);


#endif
