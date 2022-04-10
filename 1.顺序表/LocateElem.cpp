#include"func.h"
int LocateElem(SqList L, ElemType e)
{
	int i;
	for (i = 0; i < L.length; i++) {
		if (L.data[i] == e)
			return i + 1;
	}
	return 0;
}