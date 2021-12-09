#include "Maze.h"
#include "Robot.h"
#include "RandomRobot.h"

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
    RandomRobot walle(mazeRunner);

    int i = -1 + (rand());
    int j = -1 + (rand());
    cout << i << j << endl;
    /*
    if(!mazeRunner.atExit()) {
        walle.move(mazeRunner);
        mazeRunner.printMaze();
    }
    */
	return 0;
}