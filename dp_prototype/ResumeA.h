#ifndef _RESUMEA_H
#define _RESUMEA_H
#include "Resume.h"
#include <iostream>
#include <string>
class ResumeA : public Resume{
public:
	ResumeA();
	Resume *clone()override;
	void show()override;
};
#endif