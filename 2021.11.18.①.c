#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10
//地图为9*9,雷数为10的扫雷游戏

void init(char showMap[MAX_ROW][MAX_COL],char mineMap[MAX_ROW][MAX_COL]) {
	memset(showMap, '*', MAX_ROW * MAX_COL);//showMap的地图初始化为*
	memset(mineMap, '0', MAX_ROW * MAX_COL);
	srand((unsigned)time(NULL));
	int count = 0;
	while (count < 10) {
		int row, col = 0;		
		row = rand() % MAX_ROW;
		col = rand() % MAX_COL;
		if (mineMap[row][col] == '1') {
			continue;
		}
		mineMap[row][col] = '1';
		count++;
	}
}

void print(char showMap[MAX_ROW][MAX_COL],					
		   char mineMap[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			printf("%c", showMap[row][col]);
		}printf("\n");
	}
}

void updateShow(char showMap[MAX_ROW][MAX_COL],
	char mineMap[MAX_ROW][MAX_COL],
	int row, int col) {
	int count = 0;
	for (int r = row - 1; r < row + 1; r++) {
		for (int c = col - 1; c <= col + 1; c++) {
			if (r == row && c == col) {
				continue;
			}
			if (mineMap[r][c] == '1') {
				count++;
			}
		}
	}
	showMap[row][col] = '0' + count;
}

int main() {
	char showMap[MAX_ROW][MAX_COL] = { 0 };
	char mineMap[MAX_ROW][MAX_COL] = { 0 };
	int row, col = 0;//玩家输入的坐标
	int showCount = 0;//已经翻开的坐标数
	//1.创建地图并初始化.
	init(showMap, mineMap);
	//2.打印地图
	while (1) {
		system("cls");
		print(showMap, mineMap);
		//3.玩家输入翻开的坐标(合法判定)
		printf("请输入坐标:\n");
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW || col<0 || col>MAX_COL) {
			printf("您输入的坐标非法!!!请重新输入:\n");
			Sleep(200);
			continue;
		}
		if (showMap[row][col] != '*') {
			printf("该坐标已经翻开,请重新输入:\n");
			Sleep(200);
			continue;
		}
		//4.判定是否踩雷
		if (mineMap[row][col] == '1') {
			printf("踩雷了!!游戏结束\n");
			Sleep(200);
			break;
		}
		//5.更新showMap,在翻开的位置显示周围的雷数
		updateShow(showMap, mineMap, row, col);
		//6.判定玩家是否翻开所有位置
		showCount++;
		if (showCount == MAX_ROW * MAX_COL - MINE_COUNT) {
			printf("恭喜你赢了!!!\n");
			break;
		}
	}
}