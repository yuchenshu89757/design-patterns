#include "OperationAddX86.h"

OperationAddX86::OperationAddX86() = default;

OperationAddX86::OperationAddX86(double a, double b) :OperationAdd(a, b){}

OperationAddX86::~OperationAddX86() = default;

double OperationAddX86::GetResult(std::ostream &os){
	os << "OperationAddX86" << std::endl;
	return numA + numB;
}