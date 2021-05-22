#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10

void init(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL]) {
		memset(showMap, '*', MAX_ROW * MAX_COL);
	memset(mineMap, '0', MAX_ROW * MAX_COL);
	//随机产生十个位置作为地雷~~
	int mineCount = 0;
	srand((unsigned int)time(0));	while (mineCount < MINE_COUNT) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (mineMap[row][col] == '1') {
			continue;
		}
		mineMap[row][col] = '1';
		mineCount++;
	}
}

//用这一个函数具备同时打印两种地图的功能
void print(char theMap[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			printf("%c ", theMap[row][col]);
		}
		printf("\n");
	}
}

void update(char showMap[MAX_ROW][MAX_COL],
	char mineMap[MAX_ROW][MAX_COL], int row, int col) {
	int count = 0;//周围地雷的个数
	for (int r = row - 1; r <= row + 1; r++) {
		for (int c = col - 1; c <= col + 1; c++) {
			if (r < 0 || r >= MAX_ROW || c < 0 || c >= MAX_COL) {
				//超出棋盘范围
				continue;
			}
			if (r == row && c == col) {//不需要判断,直接下次循环
				continue;
			}
			if (mineMap[r][c] == '1') {
				count++;
			}
		}
	}showMap[row][col] = '0' + count;
}

int main() {
	//1.创建地图并初始化
	char showMap[MAX_ROW][MAX_COL] = { 0 };
	char mineMap[MAX_ROW][MAX_COL] = { 0 };
	init(showMap, mineMap);
	int openedCount = 0;
	while (1) {
		//2.打印地图
		system("cls");
		print(showMap);
		//print(mineMap);
		//3.玩家输入坐标
		int row = 0;
		int col = 0;
		printf("请输入坐标:\n");
		scanf("%d %d", &row, &col);
		//判定输入合法
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("您输入的坐标有误!请重新输入!\n");
			continue;
		}
		if (showMap[row][col] != '*') {
			printf("该位置已经翻开了,请重新输入!\n");
			continue;
		}
		//判定是否踩雷
		if (mineMap[row][col] == '1') {
			printf("踩到地雷了!!!游戏结束!\n");
			break;
		}
		//5.更新showMap,显示周围地雷数量
		update(showMap, mineMap, row, col);
		//6.进行游戏胜利的判定
		openedCount++;
		if (openedCount == MAX_ROW * MAX_COL - MINE_COUNT) {
			printf("恭喜你赢了!\n");
			break;
		}
	}
	return 0;
}