#include"func.h"

bool EnQueue(SqQueue& Q, Elemtype x)
{
	if ((Q.rear + 1) % MaxSize == Q.front)
	{
		return false;
	}
	Q.data[Q.rear ] = x;
	Q.rear = (Q.rear + 1) % MaxSize;
	return true;
}