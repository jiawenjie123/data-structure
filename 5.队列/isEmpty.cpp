#include "func.h"

bool isEmpty(SqQueue Q)
{
	if (Q.rear == Q.front) {
		return true;
	}
	return false;
}