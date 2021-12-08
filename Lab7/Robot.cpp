#ifndef ROBOT_CPP
#define ROBOT_CPP

#include "Robot.h"

Robot::Robot(Maze& m) {
    for(unsigned int i = 0; i < 81; i++) {
		if(labyrinth[i/9][i%9] == 'S') {
            rowBot = i/9;
            colBot = i%9;
        }
	}
}

bool atExit(const Maze& m);

#endif