#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
typedef int ElemTye;
typedef struct LNode {
	ElemTye data;
	struct LNode* next;
}LNode,*LinkList; 
LinkList CreateList1(LinkList& L);
void PrintList(LinkList L);
LinkList CreateList2(LinkList& L);
LinkList GetElem(LinkList L, int i);
LinkList  LocateElem(LinkList L, ElemTye j);
bool ListFrontinsert(LinkList L, int i, ElemTye e);
bool ListDelete(LinkList L, int j);
bool ListChange(LinkList L, int i, ElemTye j);