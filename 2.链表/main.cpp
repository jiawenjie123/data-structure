#include"func.h"

int main() {
	LinkList L;//����ͷ
	LinkList search;
	LinkList search1;
	int i, j;
	int m, n;
	int h;
	int q, p;
	CreateList1(L);
	PrintList(L);
	printf("�������ֵ�����\n");
	scanf("%d", &i);
	search = GetElem(L, i);
	if (search != NULL)
	{
		printf("����Ų��ҳɹ�\n");
		printf("%d\n", search->data);
	}
	else
	{
		printf("��ѯʧ��\n");
	}
	printf("������ҵ�ֵ\n");
	scanf("%d", &j);
	search1 = LocateElem(L, j);
	if (search1!= NULL)
	{
		printf("��ֵ���ҳɹ�\n");
		
	}
	else
	{
		printf("��ѯʧ��\n");
	}
	printf("��������λ�ú�����\n");
	scanf("%d%d", &m, &n);
	
	if (ListFrontinsert(L, m, n)) {
		printf("����ɹ�\n");
		PrintList(L);
	}
	else
	{
		printf("����ʧ��\n");
	}
	
	printf("����Ҫɾ����λ��\n");
	scanf("%d", &h);
	if (ListDelete(L, h)) {
		printf("ɾ���ɹ�\n");
		PrintList(L);
	}
	else
	{
		printf("ɾ��ʧ��\n");
	}
	printf("����Ҫ�޸ĵ�λ�ú���ֵ\n");
	scanf("%d%d", &q, &p);
	if (ListChange(L, q, p))
	{
		printf("�޸ĳɹ�\n");
		PrintList(L);
	}
	else
	{
		printf("�޸�ʧ��\n");
	}
	
}