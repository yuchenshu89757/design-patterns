#ifndef _FUND_H_
#define _FUND_H_

#include "Stock1.h"
#include "Stock2.h"
#include "Realty1.h"
#include "NationDebt1.h"

class Fund{

public:

	Fund();

	~Fund();

	void sell();

	void buy();

private:

	Stock1 *stock1;

	Stock2 *stock2;

	Realty1 *realty1;

	NationDebt1 *nationDebt1;

};
#endif