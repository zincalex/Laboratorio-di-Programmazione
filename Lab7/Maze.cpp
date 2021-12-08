#ifndef MAZE_CPP
#define MAZE_CPP

#include "Maze.h"

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
	for(unsigned int i = 0; i < 5; i++) {
		std::cout << '\n';
	}
}

bool Maze::isExit(short rowB, short colB) const {
	return labyrinth[rowB][colB] == 'E';
}

bool Maze::accetableMove(short movR, short movC) const { 
	if(isExit(movR, movC))
		return true;
	return movR > 8 || movR < 0 || movC > 8 || movC < 0 || labyrinth[movR][movC] == '*'; 
}

short Maze::getExitRow() const { return exitRow; }
short Maze::getExitCol() const { return exitCol; }

char* Maze::getLabyrinth() const  { return &labyrinth; }

#endif