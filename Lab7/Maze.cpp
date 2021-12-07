#ifndef MAZE_CPP
#define MAZE_CPP

#include "Maze.h"
Maze::Maze(ifstream& _in) {
	char elem;
	int i = 0;
	while(in >> elem) {
			if(elem == 'S') {
				rowBot = i/9;
				colBot = i%9;
			}
			labyrinth[i/9][i%9] = elem;
			i++;
		}
}

bool Maze::updateCorBot(short movRow, short movCol) { 
	if(labyrinth[rowBot + movRow][colBot + movCol] == '*') {
		return false;
	}
	labyrinth[rowBot + movRow][colBot + movCol] = 'S'
	labyrinth[rowBot][colBot] = '';
	colBot = movCol;
	rowBot = movRow;
}

void Maze::printMaze()const {
	int createspace = 0;
	while(createspace < 15)
		std::cout << '\n';
	for(unsigned int i = 0; i < 81; i++) {
		std::cout << labyrinth[i/9][i%9];
	}
}

short[][] Maze::getBotPos() const {
	//short[][] botPos {rowBot, colBot};
	return {rowBot, colBot};
}

bool Maze::isExit() const {
	return labyrinth[rowBot][colBot] == 'E';
}

}


#endif