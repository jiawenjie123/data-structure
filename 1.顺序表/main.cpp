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
		printf("插入成功\n");
		PrintList(L);
	}
	else {
		printf("插入失败");
	}
	int d;
	scanf("%d", &d);
	ret1 = ListDelete(L, d, del);
	if (ret1) {
		printf("删除成功\n");
		printf("删除的值为%d\n",del);
		PrintList(L);
	}
	else {
		printf("删除失败");
	}
	int s;
	scanf("%d", &s);
	ret2 = LocateElem(L, s);
	if (ret2) {
		printf("查找成功\n");
		printf("位置为%d\n", ret2);
	}
	else {
		printf("查找失败");
	}
	return 0;
}