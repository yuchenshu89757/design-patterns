#include "OperationAddX64.h"

OperationAddX64::OperationAddX64() = default;

OperationAddX64::OperationAddX64(double a, double b) :OperationAdd(a, b){}

OperationAddX64::~OperationAddX64() = default;

double OperationAddX64::GetResult(std::ostream &os){
	os << "OperationAddX64" << std::endl;
	return numA + numB;
}

