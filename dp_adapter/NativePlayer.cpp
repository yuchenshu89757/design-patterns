#include "NativePlayer.h"

NativePlayer::NativePlayer() = default;

NativePlayer::~NativePlayer() = default;

void NativePlayer::attack(){
	std::cout << "NativePlayer : attack..." << std::endl;
}

void NativePlayer::defense(){
	std::cout << "NativePlayer : defense..." << std::endl;
}