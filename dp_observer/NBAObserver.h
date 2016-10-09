#ifndef _NBAOBSERVER_H_
#define _NBAOBSERVER_H_

#include "Observer.h"

class NBAObserver : public Observer{
public:
	NBAObserver(const std::string&);
	void update()override;
};
#endif