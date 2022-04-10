#include"func.h"

bool Pop(SqStack S, Elemtype& x)
{
	if (StackEmpty(S)) {
		return false;
	}
	x = S.data[S.top--];
	return true;

}