#ifndef MAZE_H
#define MAZE_H

#include <fstream>
#include <iostream>

class Maze {
	private :
		char labyrinth[9][9];
		short exitRow, exitCol;

	public :
		Maze(std::ifstream& _in);

		bool accetableMove(short movR, short movC) const;
		bool isExit(short rowB, short colB) const;
		void printMaze() const;

		short getExitRow() const;
		short getExitCol() const;
		char* getLabyrinth() const;
};

#endif