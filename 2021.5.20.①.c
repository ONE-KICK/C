#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAX_ROW 3
#define MAX_COL 3

char chessBoard[MAX_ROW][MAX_COL];

void init(char chessBoard[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			chessBoard[row][col] = ' ';
		}
	}
}

void print(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("+---+---+---+\n");
	for (int row = 0; row < MAX_ROW; row++) {
		printf("|");
		for (int col = 0; col < MAX_COL; col++) {
			printf(" %c |", chessBoard[row][col]);
		}
		printf("\n+---+---+---+\n");
	}
}

void playerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("玩家落子环节----------------");
	while (1) {
		printf("请输入落子的坐标(row,col):\n");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		//判断合法
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("输入的坐标有误,请重新输入.\n");
			continue;
		}
		if (chessBoard[row][col] != ' ') {
			//位置冲突
			printf("该位置已经落子过了,请重新输入.\n");
			continue;
		}
		//落子
		chessBoard[row][col] = 'x';
		break;
	}
}

void computerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' ') {
			//位置冲突
			continue;
		}
		chessBoard[row][col] = 'o';
			break;
	}
}

//1表示满
//0没满
int isFull(char chessBoard[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (chessBoard[row][col] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}

char gameOver(char chessBoard[MAX_ROW][MAX_COL]) {
	//返回x,玩家获胜
	//返回o,电脑获胜
	//返回 ,胜负未分
	//返回q,表示和棋
	for (int row = 0; row < MAX_ROW; row++) {
		if (chessBoard[row][0] != ' '
			&& chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2]) {
			return chessBoard[row][0];
		}
	}
	for (int col = 0; col < MAX_COL; col++) {
		if (chessBoard[0][col] != ' '
			&& chessBoard[0][col] == chessBoard[1][col]
			&& chessBoard[0][col] == chessBoard[2][col]) {
			return chessBoard[0][col];
		}
	}
	if (chessBoard[0][0] != ' '
		&& chessBoard[0][0] == chessBoard[1][1]
		&& chessBoard[0][0] == chessBoard[2][2]) {
		return chessBoard[0][0];
	}
	if (chessBoard[0][2] != ' '
		&& chessBoard[0][2] == chessBoard[1][1]
		&& chessBoard[0][2] == chessBoard[2][0]) {
		return chessBoard[0][2];
	}
	//判定和棋
	if (isFull(chessBoard)) {
		return 'q';
	}
	//胜负未分
	return' ';
}

int main() {
	char chessBoard[MAX_ROW][MAX_COL];
	
	//1.对棋盘进行初始化
	init(chessBoard);
	char winner = " ";
	while (1) {
		//2.打印棋盘
		print(chessBoard);
		//3.玩家落子
		playerMove(chessBoard);
		//4.判定胜负
		char winner = gameOver(chessBoard);
		if (winner != ' ') {
			break;
		}
		//5.电脑落子
		computerMove(chessBoard);
		//6.判定胜负
		winner = gameOver(chessBoard);
		if (winner != ' ') {
			break;
		}
	}
	if (winner == 'x') {
		printf("你赢了!\n");
	} if (winner == 'o') {
		printf("你输了.....\n");
	}
	if(winner == 'q') {
		printf("和棋了.....\n");
	}
	if (winner == ' ') {
		printf("胜负未分\n");
	}
	return 0;
}