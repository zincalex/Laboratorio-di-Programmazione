#ifndef ROBOT_CPP
#define ROBOT_CPP

#include "Robot.h"

Robot::Robot(Maze& m) {
  char* labyrinth = m.getLabyrinth();
  for(unsigned int i = 0; i < 81; i++) {
    std::cout << *labyrinth;
		if(*labyrinth == 'S') {
      rowBot = i/9;
      colBot = i%9;
      }
      labyrinth++;
	}
}

bool Robot::atExit(const Maze& m) {
  return m.getExitCol() == colBot && m.getExitRow() == rowBot;
}


#endif