#ifndef _WORK_H_
#define _WORK_H_

#include "State.h"

class Work{
public:
	Work();
	
	void setHour(double);

	double getHour()const;

	void setFinish(bool);

	bool getFinish()const;

	void setState(State*);

	void writeProgram();

	~Work();
private:
	State* pState;
	double _hour;
private:
	Work(const Work&);
	Work& operator=(const Work&);
};
#endif