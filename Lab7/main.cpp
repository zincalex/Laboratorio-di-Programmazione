#include <fstream>
#include <iostream>
#include "Maze.cpp"
using namespace std;

int main{
	ifstream inFile;
	inFile.open("input.txt");
	if(!inFile) {
		cout << "Cant open file";
		exit(1);
	}
	
	Maze m (inFile);
	cout << m.printMaze();
	return 0;
}