#include"func.h"
//ͷ�巨
LinkList CreateList1(LinkList& L) {
	int x;
	LNode* s;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	scanf("%d", &x);
	while (x != 9999) {
		s = (LNode*)malloc(sizeof(LNode));
		(* s).data = x;
		s->next = L->next;
		L->next = s;
		scanf("%d", &x);
	}
	return L;
}
//β�巨
LinkList CreateList2(LinkList& L) {
	int x;
	L = (LinkList)malloc(sizeof(LNode));
	LNode* s;
	LNode* r = L;
	scanf("%d", &x); 
	while (x!= 9999) {
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		r->next = s;
		r = s;
		scanf("%d", &x);
	}
	r->next = NULL;
	return L;
}