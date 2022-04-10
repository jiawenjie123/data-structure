#include"func.h"

int main() {
	SqQueue Q;
	bool ret,ret1,ret2,ret3,ret4;
	Elemtype element;
	InitQueue(Q);
	if(ret = isEmpty(Q)) {
		printf("队列为空\n");
	}
	EnQueue(Q, 3);
	EnQueue(Q, 4);
	EnQueue(Q, 5);
	if (ret1 = EnQueue(Q, 6)) {
		printf("入队成功\n");
	}
	else
	{
		printf("入队失败\n");
	}
	if (ret2= EnQueue(Q, 7))
	{
		printf("入队成功\n");
	}
	else
	{
		printf("入队失败\n");
	}
	if (ret3 = DeQueue(Q, element)) {
		printf("出队成功，出队值为%d\n", element);
	}
	else {
		printf("出队失败\n");
	}
	if (ret4 = DeQueue(Q, element)) {
		printf("出队成功，出队值为%d\n", element);
	}
	else {
		printf("出队失败\n");
	}
	return 0;
}