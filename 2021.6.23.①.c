#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int a, b = 0;
	printf("��������������:\n");
	scanf("%d %d", &a, &b);
	if (a > b) {
		printf("�ϴ����Ϊ%d\n", a);
	}
	else if (a < b) {
		printf("�ϴ����Ϊ%d\n", b);
	}
	else {
		printf("��������ֵ��ͬ:%d\n", a);
	}
	return 0;
}