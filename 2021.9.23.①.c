#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int a, b,c = 0;
	printf("��������������,�����ҳ����ǵ����Լ��:\n");
	scanf("%d%d", &a, &b);
	while (c = a % b) {
		a = b;
		b = c;
	}
	printf("�����������Լ��Ϊ%d\n", b);
	return 0;
}