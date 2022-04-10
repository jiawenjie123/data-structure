#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MaxSize 50
typedef int Elemtype;
typedef struct {
	Elemtype data[MaxSize];
	int top;

}SqStack;


bool StackEmpty(SqStack S);
void InitStack(SqStack& S);
bool Push(SqStack& S, Elemtype x);
bool GetTop(SqStack S, Elemtype& m);
bool Pop(SqStack S, Elemtype& x);