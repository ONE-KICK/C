#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void swap(int* m,int* n) {
	*m = *m ^ *n;
	*n = *m ^ *n;
	*m = *m ^ *n;
}

int main() {
	int m, n = 0;
	printf("������������,���ύ��:\n");
	scanf("%d %d", &m, &n);
	swap(&m, &n);
	printf("m=%d,n=%d\n", m, n);
	return 0;
}