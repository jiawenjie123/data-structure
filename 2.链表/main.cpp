#include"func.h"

int main() {
	LinkList L;//链表头
	LinkList search;
	LinkList search1;
	int i, j;
	int m, n;
	int h;
	int q, p;
	CreateList1(L);
	PrintList(L);
	printf("输入查找值的序号\n");
	scanf("%d", &i);
	search = GetElem(L, i);
	if (search != NULL)
	{
		printf("按序号查找成功\n");
		printf("%d\n", search->data);
	}
	else
	{
		printf("查询失败\n");
	}
	printf("输入查找的值\n");
	scanf("%d", &j);
	search1 = LocateElem(L, j);
	if (search1!= NULL)
	{
		printf("按值查找成功\n");
		
	}
	else
	{
		printf("查询失败\n");
	}
	printf("输入插入的位置和数据\n");
	scanf("%d%d", &m, &n);
	
	if (ListFrontinsert(L, m, n)) {
		printf("插入成功\n");
		PrintList(L);
	}
	else
	{
		printf("插入失败\n");
	}
	
	printf("输入要删除的位置\n");
	scanf("%d", &h);
	if (ListDelete(L, h)) {
		printf("删除成功\n");
		PrintList(L);
	}
	else
	{
		printf("删除失败\n");
	}
	printf("输入要修改的位置和数值\n");
	scanf("%d%d", &q, &p);
	if (ListChange(L, q, p))
	{
		printf("修改成功\n");
		PrintList(L);
	}
	else
	{
		printf("修改失败\n");
	}
	
}