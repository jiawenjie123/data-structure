#include"func.h"

int main() {
	SqStack S;
	bool flag,flag1,flag3;
	InitStack(S);
	flag = StackEmpty(S);
	if (flag) {
		printf("ջ��\n");
	}
	Push(S, 3);
	Push(S, 4);
	Push(S, 5);
	Elemtype m;
	flag1 = GetTop(S,m);
	if (flag1) {
		printf("��ȡջ��Ԫ��Ϊ%d\n",m);
	}
	flag3 = Pop(S, m);
	if (flag3) {
		printf("����Ԫ��Ϊ%d", m);
	}
	return 0;
}