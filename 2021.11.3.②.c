#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int isLeap(int year) {
	//return 0��Ϊ����,return 1Ϊ��ͨ����,2Ϊ��������
	if (year % 100 == 0 && year % 400 == 0) {
		return 2;
	}
	if (year % 100 == 0 || year % 4 != 0) {
		return 0;
	}
	if (year % 4 == 0) {
		return 1;
	}
}

int main() {
	int year = 0;
	scanf("%d", &year);
	int judgement = (isLeap(year));
	printf("%d", judgement);
}


