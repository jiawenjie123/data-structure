#include"func.h"

LinkList  LocateElem(LinkList L, ElemTye j) {
	LinkList p = L->next;
	int k=1;
	while (p!=NULL&&p->data!=j)
	{
		p = p->next;
		k++;
	}
	printf("%d�ǵ�%dλ\n", j, k);
	return p;
}