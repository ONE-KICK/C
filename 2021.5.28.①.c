#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 0;
	int sum = 0;
	printf("请输入一个整数:\n");
	scanf("%d", &num);
	sum = num + num * 11 + num * 111 + num * 1111 + num * 11111;
	printf("%d", sum);
}