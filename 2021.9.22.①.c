#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b = 0;
	printf("��ֱ�����a��b��ֵ");
	scanf("%d%d", &a, &b);
	if (a < b) {
		printf("aС��b");
	}
	else if (a == b) {
		printf("a����b");
	}
	else {
		printf("a����b");
	}
	return 0;
}