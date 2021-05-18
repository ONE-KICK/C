#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void findNum(num) {
	if (num < 10) {
		printf("%d\n", num);
	}
	else {
		findNum(num / 10);
		printf("%d\n", num % 10);
	}
}
int main() {
	int num = 0;
	printf("请输入一个整数，将会打印它的每一位。\n");
	scanf("%d", &num);
	findNum(num);
	return 0;
}