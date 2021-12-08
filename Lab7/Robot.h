#ifndef ROBOT_H
#define ROBOT_H

#include "Maze.h"

class Robot {
	private : 
		short rowBot, colBot;

	public :
		Robot(Maze& m);

		bool atExit(const Maze& m);

		virtual void move(Maze& m) = 0;
};

#endif