#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print(int num) {
	int i = 0;
	printf("����������Ƶ�����λ:");
	for (i = 31; i >= 1; i -= 2) {
		printf("%d ", (num >> i) & 1);
	}printf("\n");
	printf("����������Ƶ�ż��λ:");
	for (i = 30; i >= 0; i -= 2) {
		printf("%d ", (num >> i) & 1);
	}printf("\n");
}

int main() {
	int num = 0;
	printf("������һ������:\n");
	scanf("%d", &num);
	print(num);
	return 0;
}