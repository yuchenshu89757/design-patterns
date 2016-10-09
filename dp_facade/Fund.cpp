#include "Fund.h"

Fund::Fund()
	: stock1(new Stock1), stock2(new Stock2), realty1(new Realty1), nationDebt1(new NationDebt1){}

Fund::~Fund()
{
	delete stock1;
	delete stock2;
	delete realty1;
	delete nationDebt1;
}

void Fund::sell()
{
	this->stock1->sell();
	this->stock2->sell();
	this->realty1->sell();
	this->nationDebt1->sell();
}

void Fund::buy()
{
	this->stock1->buy();
	this->stock2->buy();
	this->realty1->buy();
	this->nationDebt1->buy();
}