#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void findNum(a, data) {
	int firstNum = 0;
	int lastNum = 100000 - 1;
	int flag = 0;
	while (firstNum <= lastNum) {
		int middleNum = (firstNum + lastNum) / 2;
		if (data == middleNum) {
			printf("�ҵ���ֵΪ%d�����ˡ�\n", data);
			flag = 1;
			break;
		}
		else if (data < middleNum) {
			lastNum = middleNum - 1;
		}else {
			firstNum = middleNum + 1;
		}
	}
	if (flag == 0) {
		printf("�Ҳ����������\n");
	}
}

int main() {
	int a[100000] = { 0 };
	for (int i = 0; i < 100000; i++) {
		a[i] = i;
	}
	int data = 0;
	printf("������һ��������ҵ�������\n");
	scanf("%d", &data);
	findNum(a, data);
	return 0;
}