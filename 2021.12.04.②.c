#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
int main() {
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++) {
		if ((killer != 'a') + (killer == 'c') +
			(killer == 'd') + (killer != 'd') == 3) {
			printf("������%c", killer);
		}
	}
}