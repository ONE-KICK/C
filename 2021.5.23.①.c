#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int diffBit(int m, int n) {
	int tmp = m ^ n;
	int count = 0;
	while (tmp) {
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}

int main() {
	int m = 0;
	int n = 0;
	printf("��������������:\n");
	scanf("%d %d", &m, &n);
	int num = diffBit(m, n);
	printf("�������������в�ͬλ�ĸ���Ϊ%d\n", num);
	return 0;
}