#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int a, b = 0;
	printf("请输入两个整数:\n");
	scanf("%d %d", &a, &b);
	if (a > b) {
		printf("较大的数为%d\n", a);
	}
	else if (a < b) {
		printf("较大的数为%d\n", b);
	}
	else {
		printf("两个数数值相同:%d\n", a);
	}
	return 0;
}