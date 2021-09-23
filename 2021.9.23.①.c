#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int a, b,c = 0;
	printf("请输入两个整数,将会找出他们的最大公约数:\n");
	scanf("%d%d", &a, &b);
	while (c = a % b) {
		a = b;
		b = c;
	}
	printf("这两数的最大公约数为%d\n", b);
	return 0;
}