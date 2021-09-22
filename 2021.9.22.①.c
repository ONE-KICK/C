#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b = 0;
	printf("请分别输入a和b的值");
	scanf("%d%d", &a, &b);
	if (a < b) {
		printf("a小于b");
	}
	else if (a == b) {
		printf("a等于b");
	}
	else {
		printf("a大于b");
	}
	return 0;
}