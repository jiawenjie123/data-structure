#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#define MaxSize 50
typedef int ElemType;
typedef struct {
	ElemType data[MaxSize];
	int length;
}SqList;
bool ListInsert(SqList& L, int i, ElemType e);
void PrintList(SqList& L);
bool ListDelete(SqList& L, int i, ElemType& e);
int LocateElem(SqList L, ElemType e);
