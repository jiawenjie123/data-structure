#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MaxSize 5
typedef int Elemtype;
typedef struct {
	Elemtype data[MaxSize];
	int front,rear;

}SqQueue;
void InitQueue(SqQueue& Q);
bool isEmpty(SqQueue Q);
bool EnQueue(SqQueue& Q, Elemtype x);
bool DeQueue(SqQueue& Q, Elemtype& x);