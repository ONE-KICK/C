#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void print(int num) {
	if (num > 9) {
		print(num / 10);
	}
	printf("%d ", num % 10);
}

int main() {
	int num = 0;
	printf("输入一个整数:\n");
	scanf("%d", &num);
	print(num);
}