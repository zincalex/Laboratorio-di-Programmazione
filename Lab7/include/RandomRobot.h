#ifndef RANDOMROBOT_H
#define RANDOMROBOT_H

#include "Robot.h"

class  RandomRobot : public Robot {
	public : 
	RandomRobot(Maze& m);
	void move(Maze& m) override;
};

#endif