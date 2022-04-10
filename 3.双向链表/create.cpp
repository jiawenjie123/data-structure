#include"func.h"

DinkList head_insert(DinkList& L)
{
	int x;
	DinkList s;
	L = (DinkList)malloc(sizeof(DNode));
	L->next = NULL;
	L->prior = NULL;
	scanf("%d", &x);
	while (x != 9999) {
		s = (DinkList)malloc(sizeof(DNode));
		s->data = x;
		s->next = L->next;
		if (L->next != NULL)
		{
			L->next->prior = s;
		}
		s->prior = L;
		L->next = s;
		scanf("%d", &x);

	}
	return L;
}
DinkList tail_insert(DinkList& L)
{
	int x;
	DinkList s;
	
	L = (DinkList)malloc(sizeof(DNode));
	DinkList r = L;
	L->prior = NULL;
	scanf("%d", &x);
	while (x != 9999) {
		s = (DinkList)malloc(sizeof(DNode));
		s->data = x;
		r->next = s;
		s->prior = r;
		r = s;
		scanf("%d", &x);
	}
	r->next = NULL;
	return L;
}