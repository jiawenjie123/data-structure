#include"func.h"
int main()
{
	SqList L;
	bool ret,ret1,ret2;
	ElemType del;
	L.data[0] = 1;
	L.data[1] = 2;
	L.data[2] = 3;
	L.length = 3;
	int  n;
	int m;
	scanf("%d", & n);
	scanf("%d", &m);
	ret = ListInsert(L, n, m);
	if (ret) {
		printf("����ɹ�\n");
		PrintList(L);
	}
	else {
		printf("����ʧ��");
	}
	int d;
	scanf("%d", &d);
	ret1 = ListDelete(L, d, del);
	if (ret1) {
		printf("ɾ���ɹ�\n");
		printf("ɾ����ֵΪ%d\n",del);
		PrintList(L);
	}
	else {
		printf("ɾ��ʧ��");
	}
	int s;
	scanf("%d", &s);
	ret2 = LocateElem(L, s);
	if (ret2) {
		printf("���ҳɹ�\n");
		printf("λ��Ϊ%d\n", ret2);
	}
	else {
		printf("����ʧ��");
	}
	return 0;
}