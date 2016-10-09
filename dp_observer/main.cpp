#include "NBAObserver.h"
#include "StockObserver.h"
#include "Boss.h"
#include "Secretary.h"

int main(void)
{
	Boss *boss = new Boss;
	Secretary *secretary = new Secretary;
	NBAObserver *nbaObserver = new NBAObserver("Li Ming");
	StockObserver *stockObserver = new StockObserver("Xe Qiang");

	boss->attach(nbaObserver);
	boss->attach(stockObserver);
	boss->notify();

	secretary->attach(stockObserver);
	secretary->attach(nbaObserver);
	secretary->notify();

	boss->detach(nbaObserver);
	boss->notify();

	delete boss;
	delete secretary;
	delete nbaObserver;
	delete stockObserver;

	return 0;
}