#ifndef MAZE_H
#define MAZE_H

#include <fstream>

class Maze {
	private :
		char[][] labyrinth;
		short colBot, rowBot;
		
	public :
	Maze(ifstream& _in);

	bool updateCorBot(short row, short col);
	
	void printMaze()const;
	short[][] getBotPos() const;
	bool isExit() const;
}


#endif