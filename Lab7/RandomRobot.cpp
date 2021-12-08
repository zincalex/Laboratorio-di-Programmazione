#ifndef RANDOMROBOT_CPP
#define RANDOMROBOT_CPP

#include "RandomRobot.h"

void RandomRobot::move(Maze& m) override {
    short dx = -1 + (std::rand() % 2);
    short dy = -1 + (std::rand() % 2);
    if(m.accetableMove(rowBot += dy, colBot += dx)) {
        rowBot += dy;
        colBot += dx;
    }
    else std::cout << "Invalid Move, try again";
}

#endif

