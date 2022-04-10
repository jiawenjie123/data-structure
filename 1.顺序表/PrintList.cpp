#include"func.h"
void PrintList(SqList& L) {
	for (int i = 0; i < L.length; i++) {
		printf("%3d", L.data[i]);
	}
	printf("\n");
}