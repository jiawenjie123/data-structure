#include"func.h"

int main() {
	SqStack S;
	bool flag,flag1,flag3;
	InitStack(S);
	flag = StackEmpty(S);
	if (flag) {
		printf("栈空\n");
	}
	Push(S, 3);
	Push(S, 4);
	Push(S, 5);
	Elemtype m;
	flag1 = GetTop(S,m);
	if (flag1) {
		printf("获取栈顶元素为%d\n",m);
	}
	flag3 = Pop(S, m);
	if (flag3) {
		printf("弹出元素为%d", m);
	}
	return 0;
}