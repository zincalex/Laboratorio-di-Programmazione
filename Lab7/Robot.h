#ifnndef ROBOT_H
#define ROBOT_H

class Robot {
	public :
	virtual void move(Maze& m) = 0;
}

#endif