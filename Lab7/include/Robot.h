#ifndef ROBOT_H
#define ROBOT_H

#include "Maze.h"

class Robot {
	protected : 
		short rowBot, colBot;
		
	public :
		Robot(Maze& m);
		bool atExit(const Maze& m);
		virtual void move(Maze& m) = 0;

		Robot(const Robot& other) = delete;
		Robot& operator=(const Robot& other) = delete;
};

#endif