#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	printf("��������������,���ᰴ�մӴ�С��˳�����г���\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a < c) {
		swap(&a, &c);
	}if (a < b) {
		swap(&b, &c);
	}if (b < c) {
		swap(&b, &c);
	}printf("%d>%d>%d\n", a, b, c);
	return 0;
}
