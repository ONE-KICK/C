#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define P 1 //��ˮ�ĵ���
#define C 2 //������ƿ��һ����ˮ

int SodaChange(int n) {
	int ret = n / C;//��ƿ�һ�����ˮ
	int empty = n / C + n % C;
	if (empty > 1) 
		return ret + SodaChange(empty);
	else 
		return ret;
}

int main() {
	int p = 0;//���
	int n = 0;//����������ˮ
	printf("��������:\n");
	scanf("%d", &p);
	n = p / P;
	int bottle = n + SodaChange(n);
	printf("%dƿ\n", bottle);
	return 0;
}