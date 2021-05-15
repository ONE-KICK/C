#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void game() {
	printf("开始一局猜数字游戏！\n");
	//先生成一个1到100的随机数
	int toGuess = rand() % 100 + 1;
	//交互界面
	while (1) {
		printf("请输入你猜的数字：\n");
		int inputNum = 0;
		scanf("%d", &inputNum);
		if (inputNum < toGuess) {
			printf("猜低了\n");
		}
		else if (inputNum > toGuess) {
			printf("猜高了\n");
		}
		else {
			printf("恭喜你！猜对了！\n");
			break;
		}
	}
}

void menu() {
	printf("=======================\n");
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");
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
		printf("请重新输入！\n");
	}
}
int main() {
	srand((unsigned int)time(0));
	menu();
	return 0;
}