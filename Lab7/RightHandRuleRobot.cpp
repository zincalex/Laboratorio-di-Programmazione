#ifndef RIGHTHANDRULEROBOT_CPP
#define RIGHTHANDRULEROBOT_CPP

#include "RightHandRuleRobot.h"

void RightHandRuleRobot::move(Maze& m) {
    close_wall = false;
    while(close_wall) {
        
    }

    short dx = -1 + (std::rand() % 2);
    short dy = -1 + (std::rand() % 2);
    if(m.accetableMove(rowBot += dy, colBot += dx)) {
        rowBot += dy;
        colBot += dx;
    }
    else std::cout << "Invalid Move, try again";
}

#endif