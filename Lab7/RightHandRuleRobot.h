#ifndef RIGHTHANDRULEROBOT_H
#define RIGHTHANDRULEROBOT_H

#include "Robot.h"

class RightHandRuleRobot : public Robot {
	private :
		bool close_wall;

	public : 
		void move(Maze& m) override;
};

#endif