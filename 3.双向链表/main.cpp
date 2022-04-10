#include"func.h"

int main() {
	DinkList L;
	tail_insert(L);
	PrintList(L);
	//Frontinsert(L, 3, 5);
	//PrintList(L);
	DinkListdelete(L, 2);

	PrintList(L);
}