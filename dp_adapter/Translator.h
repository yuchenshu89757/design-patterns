#ifndef _TRANSLATOR_H
#define _TRANSLATOR_H
#include "Player.h"
#include "ForeignPlayer.h"
class Translator : public Player, public ForeignPlayer{
public:
	Translator();
	~Translator();
	void attack()override;
	void defense()override;
};
#endif