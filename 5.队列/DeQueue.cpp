#include"func.h"
bool DeQueue(SqQueue& Q, Elemtype& x)
{
	if (Q.rear == Q.front) {
		return false;
	}
	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % MaxSize;
	return true;
}