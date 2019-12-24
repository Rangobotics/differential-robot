#ifndef POSITION_H
#define POSITION_H

#include "Odometry.h"

void posUpdate(Position* robPos);
void goToPos(Position* robPos, Position* goalPos);
void printPos(Position* robPos);

#endif /* POSITION_H */