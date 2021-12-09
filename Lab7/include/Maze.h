#ifndef MAZE_H
#define MAZE_H

#include <fstream>
#include <iostream>

class Maze {
	private :
		char labyrinth[9][9];
		short exitRow, exitCol, robotCol, robotRow;

	public :
		Maze(std::ifstream& _in);

		void updateLabyrinth(short dx, short dy);

		bool accetableMove(short movR, short movC) const;
		bool atExit() const;
		void printMaze() const;

		short getExitRow() const;
		short getExitCol() const;
		short getBotRow() const;
		short getBotCol() const;
};

#endif