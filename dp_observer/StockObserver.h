#ifndef _STOCKOBSERVER_H_
#define _STOCKOBSERVER_H_

#include "Observer.h"

class StockObserver : public Observer{
public:
	StockObserver(const std::string&);
	void update()override;
};
#endif