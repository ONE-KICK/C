#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_ROW 3
#define MAX_COL 3

void init(char chess[MAX_ROW][MAX_COL]) {
	for (int i = 0; i < MAX_ROW; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			chess[i][j] = ' ';
		}
	}
}

void print(char chess[MAX_ROW][MAX_COL]) {
	
	for (int i = 0; i < MAX_ROW; i++) {
		printf("+--+--+--+");
		printf("\n");
		for (int j = 0; j < MAX_COL; j++) {
			printf("|%c ", chess[i][j]);
		}printf("|");
		printf("\n");
	}printf("+--+--+--+");
	printf("\n");
}

void playerMove(char chess[MAX_ROW][MAX_COL]) {
	int row, col = 0;
	while (1) {
		printf("�������������µ�λ��:\n");
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("�������λ�÷Ƿ�,����������:\n");
			continue;
		}
		if (chess[row][col] != ' ') {
			printf("�������λ���Ѿ���������,����������:\n");
			continue;
		}break;
	}
	chess[row][col] = 'x';
}

void computerMove(char chess[MAX_ROW][MAX_COL]) {
	srand((unsigned)time(NULL));
	int row, col = 0;
	while (1) {
		 row = rand() % MAX_ROW;
		 col = rand() % MAX_COL;
		 if (chess[row][col] != ' ') {
			 continue;
		 }break;
	}chess[row][col] = 'o';
}

int isFull(char chess[MAX_ROW][MAX_COL]){
	for (int i = 0; i < MAX_ROW; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			if (chess[i][j] == ' ') {
				return 0;
			}
		}
	}return 1;
}

char isGameover(char chess[MAX_ROW][MAX_COL]) {
	//����x,��һ�ʤ
	//����o,���Ի�ʤ
	//����q,����
	//����' ',����
	int row = 0;
	int col = 0;
	if (chess[row][0] != ' '
		&& chess[row][0] == chess[row][1]
		&& chess[row][0] == chess[row][2]) {
		return chess[row][0];
	}
	if (chess[0][col] != ' '
		&& chess[0][col] == chess[1][col]
		&& chess[0][col] == chess[2][col]) {
		return chess[0][col];
	}
	if (chess[0][0] != ' '
		&& chess[0][0] == chess[1][1]
		&& chess[0][0] == chess[2][2]) {
		return chess[0][0];
	}
	if (chess[0][2] != ' '
		&& chess[0][2] == chess[1][1]
		&& chess[0][2] == chess[2][0]) {
		return chess[0][2];
	}
	if (isFull(chess)) {
		return 'q';
	}
	return' ';
}
int main() {
	char chessBoard[MAX_ROW][MAX_COL];
	//1.��ʼ������
	init(chessBoard);
	char winner = ' ';
	while (1) {
		//2.��ӡ����
		print(chessBoard);
		//3.�������
		playerMove(chessBoard);
		//4.ʤ���ж�
		winner = isGameover(chessBoard);
		if (winner != ' ') {
			break;
		}
		//5.��������
		computerMove(chessBoard);
		//6.ʤ���ж�
		winner = isGameover(chessBoard);
		if (winner != ' ') {
			break;
		}
	}
	if (winner == 'x') {
		printf("��ϲ��Ӯ��!\n");
	}
	if (winner == 'o') {
		printf("������\n");
	}
	if(winner=='q'){
		printf("������\n");
	}
	return 0;
}