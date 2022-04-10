#include"func.h"

DinkList GetElem(DinkList L, int i) {
	int j = 1;
	DNode* p = L->next;
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