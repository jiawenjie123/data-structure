#include"func.h"

bool Push(SqStack& S, Elemtype x) {
	if (S.top == MaxSize - 1) {
		printf("ջ��");
	}
	S.data[++S.top] = x;
	return true;
}