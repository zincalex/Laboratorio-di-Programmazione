#include "../include/Maze.h"
#include "../include/Robot.h"
#include "../include/RandomRobot.h"
#include <chrono>
#include <thread>


using namespace std;

int main() {
    srand(time(NULL));
    ifstream inFile;
    inFile.open("../input.txt");
    if(!inFile) {
        cout << "Unable to open file input.txt";
        exit(1);
    }
    Maze mazeRunner{inFile};
    mazeRunner.printMaze();
    RandomRobot walle(mazeRunner);
    int mosse_fatte = 0;
    while(!mazeRunner.atExit()) {
        walle.move(mazeRunner);
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        system("cls");
        mazeRunner.printMaze();
        mosse_fatte++;
    }
    cout << mosse_fatte<< endl;
	return 0;
}