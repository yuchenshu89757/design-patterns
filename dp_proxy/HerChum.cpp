#include "HerChum.h"

HerChum::HerChum(const std::string& girl) :boy(girl){}

void HerChum::giveFlower(){
	boy.giveFlower();
}

void HerChum::giveChocolate(){
	boy.giveChocolate();
}

void HerChum::giveBook(){
	boy.giveBook();
}