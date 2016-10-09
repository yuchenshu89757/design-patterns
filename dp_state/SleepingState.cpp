#include "SleepingState.h"
#include <iostream>
#include "Work.h"
void SleepingState::handle(Work& work){
	std::cout << "当前时间:" << work.getHour() << "点，不行了，睡着了" << std::endl;
}

SleepingState::~SleepingState() = default;
