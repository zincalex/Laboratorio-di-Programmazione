#ifnndef MAZE_H
#define MAZE_H

#include <fstream>

class Maze {
	private :
		char[][] labyrinth;
		short colBot, rowBot;
		
	public :
	Maze(istream& _in);
	~Maze();
	
	
	void printMaze()const;
	short[][] getBotPos() const:
	bool isWall() const;
}


#endif