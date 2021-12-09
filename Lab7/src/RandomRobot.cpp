#ifndef RANDOMROBOT_CPP
#define RANDOMROBOT_CPP

#include "../include/RandomRobot.h"

void RandomRobot::move(Maze& m) {
    short dx = -1 + (rand() % 2);
    short dy = -1 + (rand() % 2);
    if(m.accetableMove(rowBot + dy, colBot + dx)) {
        rowBot += dy;
        colBot += dx;
        m.updateLabyrinth(dy,dx);
    }
    else std::cout << "Invalid Move, try again" << std::endl;
}

RandomRobot::RandomRobot(Maze& m) : Robot(m) {}

#endif

