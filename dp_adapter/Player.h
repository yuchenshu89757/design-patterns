#ifndef _PLAYER_H
#define _PLAYER_H
class Player{
public:
	Player();
	virtual ~Player();
	virtual void attack() = 0;
	virtual void defense() = 0;
};
#endif