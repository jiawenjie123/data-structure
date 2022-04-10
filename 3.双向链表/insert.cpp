#include"func.h"

bool Frontinsert(DinkList L, int i, ElemType j)
{
	DinkList p = GetElem(L, i - 1);
	if (p == NULL) {
		return false;
	}
	DinkList s = (DinkList)malloc(sizeof(DNode));
	s->data = j;
	s->next = p->next;
	p->next->prior = s;
	s->prior = p;
	p->next = s;
	return true;

}
