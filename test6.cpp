#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void game() {
	printf("��ʼһ�ֲ�������Ϸ��\n");
	//������һ��1��100�������
	int toGuess = rand() % 100 + 1;
	//��������
	while (1) {
		printf("��������µ����֣�\n");
		int inputNum = 0;
		scanf("%d", &inputNum);
		if (inputNum < toGuess) {
			printf("�µ���\n");
		}
		else if (inputNum > toGuess) {
			printf("�¸���\n");
		}
		else {
			printf("��ϲ�㣡�¶��ˣ�\n");
			break;
		}
	}
}

void menu() {
	printf("=======================\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.�˳���Ϸ\n");
	printf("=======================\n");
	int choice = 0;
	scanf("%d", &choice);
	if (choice == 1) {
		game();
	}
	else if (choice == 0) {
		printf("goodbye\n");
	}
	else {
		printf("���������룡\n");
	}
}
int main() {
	srand((unsigned int)time(0));
	menu();
	return 0;
}