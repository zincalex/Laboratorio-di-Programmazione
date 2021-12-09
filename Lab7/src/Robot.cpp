#ifndef ROBOT_CPP
#define ROBOT_CPP

#include "../include/Robot.h"

Robot::Robot(Maze& m) {
  rowBot = m.getBotRow();
  colBot = m.getBotCol();
}

bool Robot::atExit(const Maze& m) {
  return m.getExitCol() == colBot && m.getExitRow() == rowBot;
}


#endif