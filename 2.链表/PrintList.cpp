#include"func.h"

void PrintList(LinkList L) {
	L = L->next;
	while (L!= NULL) {
		printf("%3d", L->data);
		L = L->next;
	}
	printf("\n");
}