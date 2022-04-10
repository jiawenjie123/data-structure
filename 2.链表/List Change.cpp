#include"func.h"

bool ListChange(LinkList L, int i, ElemTye j)
{
	LinkList p = GetElem(L, i);
	if (p == NULL)
		return false;
	p->data = j;
	return true;
}