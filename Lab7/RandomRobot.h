#ifndef RANDOMROBOT_H
#define RANDOMROBOT_H

#include "Robot.h"

class  RandomRobot : public Robot {
	public : 
	void move(Maze& m) override;
};

#endif