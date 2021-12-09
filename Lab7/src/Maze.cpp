#ifndef MAZE_CPP
#define MAZE_CPP

#include "../include/Maze.h"

Maze::Maze(std::ifstream& _in) {
	std::string elem;
	int i = 0;
	while(std::getline(_in, elem)) {
		for(unsigned int j = 0; j < 9; j++) {
			labyrinth[i][j] = elem[j];
			if(labyrinth[i][j] == 'E') {
				exitCol = j;
				exitRow = i;
			}
			if(labyrinth[i][j] == 'S') {
				robotCol = j;
				robotRow = i;
			}
		}
		i++;
	}
}

void Maze::printMaze() const {
	for(unsigned int i = 0; i < 81; i++) {
		std::cout << labyrinth[i/9][i%9];
		if(((i+1)%9) == 0)
			std::cout << '\n';
	}
}

bool Maze::atExit() const {
	return labyrinth[robotRow][robotCol] == 'E';
}

bool Maze::accetableMove(short movR, short movC) const { 
	return movR <= 8 && movR >= 0 && movC <= 8 && movC >= 0 && labyrinth[movR][movC] != '*'; 
}

short Maze::getExitRow() const { return exitRow; }
short Maze::getExitCol() const { return exitCol; }
short Maze::getBotRow() const { return robotRow; }
short Maze::getBotCol() const { return robotCol; }

void Maze::updateLabyrinth(short dy, short dx) {
	if(labyrinth[robotRow + dy][robotCol + dx] != 'E') {
		labyrinth[robotRow][robotCol] = ' ';
		labyrinth[robotRow + dy][robotCol + dx] = 'S';
		robotRow = robotRow + dy;
		robotCol = robotCol + dx;

	}
	else {
		labyrinth[robotRow][robotCol] = ' ';
		robotRow = exitRow;
		robotCol = exitCol;
	}
}

#endif