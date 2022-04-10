#include"func.h"
bool ListDelete(LinkList L, int j) {
	LinkList p = GetElem(L, j - 1);
	LinkList q;
	if (NULL == p) {
		return false;
	}
	q = p->next;
	if (q == NULL) {
		return false;
	}
	p->next = q->next;
	free(q);
	q = NULL;
	return true;
 }