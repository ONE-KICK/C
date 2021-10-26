#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

void game() {
	//猜数字的区间为100.
	//rand srand随机种子,利用时间戳 
	srand((unsigned int) time(0));
	int toGuess = rand() % 100 + 1;
	int guessNum = 0;
	printf("请输入猜的数[1,100]:\n");
	
	while (1) {
		
		scanf("%d", &guessNum);
		if (guessNum < toGuess) {
			printf("猜小了!\n"); 
			}
		else if (guessNum > toGuess) {
			printf("猜大了!\n"); 
			}
		else {
			printf("恭喜你猜对了!\n");
			break;
				}
	}
}

int menu() {
	printf("=================\n");
	printf("欢迎来到猜数字游戏!\n");
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");
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
			printf("游戏即将退出.....\n");
			break;
		}else{
			printf("请重新输入!\n");
			Sleep(1000);
			system("cls");
		}
	}
	
	return 0;
}