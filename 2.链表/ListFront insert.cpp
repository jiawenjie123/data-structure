#include"func.h"

bool ListFrontinsert(LinkList L, int i, ElemTye e)
{
	LinkList p = GetElem(L, i - 1);
	if (p == NULL) {
		return false;
	}
	LinkList s = (LinkList)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;

}