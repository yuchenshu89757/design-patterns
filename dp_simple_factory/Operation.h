#ifndef OPERATION_H
#define OPERATION_H
class Operation{
protected:
	double n_pA = 0.0;
	double n_pB = 0.0;
public:
	Operation() = default;
	Operation(double nPA, double nPB) : n_pA(nPA), n_pB(nPB){}
	virtual double getResult()const = 0;
	virtual ~Operation(){}
};
enum OP{
	ADD,//�ӷ�
	SUB,//����
	MUL,//�˷�
	DIV //����
};
#endif