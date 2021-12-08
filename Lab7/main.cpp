#include "Maze.h"
#include "Robot.h"

using namespace std;

int main() {
    ifstream inFile;
    inFile.open(".\\input.txt");
    if(!inFile) {
        cout << "Unable to open file input.txt";
        exit(1);
    }
    Maze mazeRunner{inFile};
    mazeRunner.printMaze();
	return 0;
}