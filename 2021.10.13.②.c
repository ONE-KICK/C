#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int i = 0;
	for (i = 0; i < 3; i++) {
		char password[1024] = { 0 };
		printf("����������:");
		scanf("%s", password);
		//scanf�������λ��߸�����,��Ҫ&
		//��������ַ���,����Ҫ����&
		if (strcmp(password, "8521") == 0) {
			//�ַ���passwordû�취ֱ��дpassword==8521
			//��Ҫ��������strcmp���ж�,==0��Ϊ��,������Ϊ��.
			printf("������ȷ.\n");
		}
		else {
			printf("�������.\n");
		}
	}if (i >= 3) {
		printf("���������������,ϵͳ�˳�.\n");
	}
}