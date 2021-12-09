#ifndef RANDOMROBOT_CPP
#define RANDOMROBOT_CPP

#include "../include/RandomRobot.h"
#include <time.h>

void RandomRobot::move(Maze& m) {
    short dx = -1 + (rand() % 3);
    short dy = -1 + (rand() % 3);
    if(m.accetableMove(rowBot + dy, colBot + dx)) {
        rowBot += dy;
        colBot += dx;
        m.updateLabyrinth(dy,dx);
    }
}

RandomRobot::RandomRobot(Maze& m) : Robot(m) {}

#endif

