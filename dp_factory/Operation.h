#ifndef OPERATION_H
#define OPERATION_H
class Operation{
public:
	Operation() = default;
	Operation(double numA, double numB) :num_a(numA), num_b(numB){}
	double getNumA()const{ return num_a; }
	double getNumB()const{ return num_b; }
	void setNumA(double num){ num_a = num; }
	void setNumB(double num){ num_b = num; }
	virtual double getResult()const = 0;
	virtual ~Operation() = default;
protected:
	double num_a = 0;
	double num_b = 0;
};
#endif