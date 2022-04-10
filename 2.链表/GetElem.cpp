#include"func.h"

LinkList GetElem(LinkList L,int i) {
	int j = 1;
	LNode* p = L->next;
	if (i == 0)
		return L;
	if (i < 0)
		return NULL;
	while (p && j < i) {
		p = p->next;
		j++;
	}
	return p;
}