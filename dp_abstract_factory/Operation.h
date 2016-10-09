#ifndef _OPERATION_H
#define _OPERATION_H
#include <ostream>
class Operation{
public:
	Operation();
	Operation(double, double);
	virtual ~Operation();
	virtual double GetResult(std::ostream&) = 0;
protected:
	double numA;
	double numB;
};
#endif