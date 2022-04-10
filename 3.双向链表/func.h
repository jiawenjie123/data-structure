#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct DNode {
	ElemType data;
	struct DNode* prior;
	struct DNode* next;
}DNode,*DinkList;
DinkList head_insert(DinkList& L);
void PrintList(DinkList L);
DinkList tail_insert(DinkList& L);
DinkList GetElem(DinkList L, int i);
bool Frontinsert(DinkList L, int i, ElemType j);
bool DinkListdelete(DinkList L, int i);