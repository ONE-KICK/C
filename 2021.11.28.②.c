#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void print(int num) {
	printf("������Ķ���������λΪ��\n");
	for (int i = 31; i >= 1;i-=2) {
		printf("%d ", (num >> i) & 1);
	}printf("\n");
	printf("������Ķ�����ż��λλ:\n");
	for (int i = 30; i >= 0; i -= 2) {
		printf("%d ", (num >> i) & 1);
	}
}

int main() {
	int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}