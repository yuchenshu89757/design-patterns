#include "OperationFactoryX64.h"

OperationFactoryX64::OperationFactoryX64() = default;

OperationFactoryX64::~OperationFactoryX64() = default;

Operation *OperationFactoryX64::CreateOperationAdd(double a, double b){
	return new OperationAddX64(a, b);
}

Operation *OperationFactoryX64::CreateOperationSub(double a, double b){
	return new OperationAddX64(a, b);
}

Operation *OperationFactoryX64::CreateOperationMul(double a, double b){
	return new OperationAddX64(a, b);
}

Operation *OperationFactoryX64::CreateOperationDiv(double a, double b){
	return new OperationAddX64(a, b);
}