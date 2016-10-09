#include "ForenoonState.h"
#include "NoonState.h"
#include <iostream>
#include "Work.h"
void ForenoonState::handle(Work& work){
	if (work.getHour() < 12)
		std::cout << "��ǰʱ��:" << work.getHour() << "�㣬���繤��������ٱ�" << std::endl;
	else{
		work.setState(new NoonState());
		work.writeProgram();
	}
}

ForenoonState::~ForenoonState() = default;

