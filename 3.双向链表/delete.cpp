#include"func.h"

bool DinkListdelete(DinkList L, int i) {
	DinkList p = GetElem(L, i - 1);
	if (p == NULL) {
		return false;
	}
	DinkList q= p->next;
	if (q == NULL) {
		return false;
	}
	p->next = q->next;
	if (q->next != NULL) {
		q->next->prior = p;
	}
	free (q);
	return true;

}