#include "OperationFactoryX86.h"

OperationFactoryX86::OperationFactoryX86() = default;

OperationFactoryX86::~OperationFactoryX86() = default;

Operation *OperationFactoryX86::CreateOperationAdd(double a, double b){
	return new OperationAddX86(a, b);
}

Operation *OperationFactoryX86::CreateOperationSub(double a, double b){
	return new OperationAddX86(a, b);
}
Operation *OperationFactoryX86::CreateOperationMul(double a, double b){
	return new OperationAddX86(a, b);
}
Operation *OperationFactoryX86::CreateOperationDiv(double a, double b){
	return new OperationAddX86(a, b);
}