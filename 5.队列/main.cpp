#include"func.h"

int main() {
	SqQueue Q;
	bool ret,ret1,ret2,ret3,ret4;
	Elemtype element;
	InitQueue(Q);
	if(ret = isEmpty(Q)) {
		printf("����Ϊ��\n");
	}
	EnQueue(Q, 3);
	EnQueue(Q, 4);
	EnQueue(Q, 5);
	if (ret1 = EnQueue(Q, 6)) {
		printf("��ӳɹ�\n");
	}
	else
	{
		printf("���ʧ��\n");
	}
	if (ret2= EnQueue(Q, 7))
	{
		printf("��ӳɹ�\n");
	}
	else
	{
		printf("���ʧ��\n");
	}
	if (ret3 = DeQueue(Q, element)) {
		printf("���ӳɹ�������ֵΪ%d\n", element);
	}
	else {
		printf("����ʧ��\n");
	}
	if (ret4 = DeQueue(Q, element)) {
		printf("���ӳɹ�������ֵΪ%d\n", element);
	}
	else {
		printf("����ʧ��\n");
	}
	return 0;
}