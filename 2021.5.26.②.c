#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int a,int b) {
	printf("交换之前a=%d,b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换之后a=%d,b=%d\n", a, b);
}

int main() {
	int a = 0;
	int b = 0;
	printf("请输入两个整数,将会交换数值:\n");
	scanf("%d %d", &a, &b);
	swap(a, b);
	return 0;
}