#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

void game() {
	//�����ֵ�����Ϊ100.
	//rand srand�������,����ʱ��� 
	srand((unsigned int) time(0));
	int toGuess = rand() % 100 + 1;
	int guessNum = 0;
	printf("������µ���[1,100]:\n");
	
	while (1) {
		
		scanf("%d", &guessNum);
		if (guessNum < toGuess) {
			printf("��С��!\n"); 
			}
		else if (guessNum > toGuess) {
			printf("�´���!\n"); 
			}
		else {
			printf("��ϲ��¶���!\n");
			break;
				}
	}
}

int menu() {
	printf("=================\n");
	printf("��ӭ������������Ϸ!\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.�˳���Ϸ\n");
	printf("=================\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

int main() {
	while (1) {
		int choice= menu();
		if (choice == 1) {
			game();
		}
		else if(choice == 0) {
			printf("��Ϸ�����˳�.....\n");
			break;
		}else{
			printf("����������!\n");
			Sleep(1000);
			system("cls");
		}
	}
	
	return 0;
}