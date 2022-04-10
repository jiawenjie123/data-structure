#include "func.h"

bool GetTop(SqStack S, Elemtype& m) {
	if (StackEmpty(S)) {
		return false;
	}
	m = S.data[S.top];
	return true;
}