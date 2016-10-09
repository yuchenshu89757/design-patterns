#ifndef _NATIVEPLAYER_H
#define _NATINEPLAYER_H
#include <iostream>
#include "Player.h"
class NativePlayer : public Player{
public:
	NativePlayer();
	~NativePlayer();
	void attack()override;
	void defense()override;
};
#endif