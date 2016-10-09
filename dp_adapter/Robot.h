#ifndef _ROBOT_H
#define _ROBOT_H
class Robot{
public:
	Robot();
	virtual~Robot();
	virtual void cry()const = 0;
	virtual void move()const = 0;
};
#endif