#include "ForeignPlayer.h"

ForeignPlayer::ForeignPlayer() = default;

ForeignPlayer::~ForeignPlayer() = default;

void ForeignPlayer::fire(){
	std::cout << "ForeignPlayer : fire..." << std::endl;
}

void ForeignPlayer::back(){
	std::cout << "ForeignPlayer : back..." << std::endl;
}