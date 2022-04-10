#include"func.h"
bool ListDelete(SqList& L, int i, ElemType& e)
{
	if (i<1 || i>L.length + 1)
		return false;
	if (L.length == 0)
		return false;
	e = L.data[i - 1];
	for (int j = i; j < L.length; j++)
		L.data[j - 1] = L.data[j];
	L.length--;
	return true;
}