#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int a,int b) {
	printf("����֮ǰa=%d,b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("����֮��a=%d,b=%d\n", a, b);
}

int main() {
	int a = 0;
	int b = 0;
	printf("��������������,���ύ����ֵ:\n");
	scanf("%d %d", &a, &b);
	swap(a, b);
	return 0;
}