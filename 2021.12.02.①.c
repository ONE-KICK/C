#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define P 1  //����	
#define C 2  //����ƿ�ӻ�һ��
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ

int sodaChange(int n) {
	int ret = n / C;
	int empty = n / C + n % C;
	if (empty > 1) {
		return ret + sodaChange(empty);
	}
	else
	{
		return ret;
	}
}

int main() {
	int money = 0;//���
	int n = 0;//��������ˮ
	int bottle = 0;//�ܹ���ƿ��
	printf("��������:\n");
	scanf("%d", &money);
	n = money / P;
	bottle=n+sodaChange(n);
	printf("%dԪ������%dƿ��ˮ", money, bottle);
}
