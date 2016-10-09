#include "NoonState.h"
#include "AfternoonState.h"
#include <iostream>
#include "Work.h"
void NoonState::handle(Work& work){
	if (work.getHour() < 13)
		std::cout << "��ǰʱ��:" << work.getHour() << "�㣬���ˣ��緹������" << std::endl;
	else{
		work.setState(new AfternoonState());
		work.writeProgram();
	}
}

NoonState::~NoonState() = default;
