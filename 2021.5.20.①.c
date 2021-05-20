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
	printf("������ӻ���----------------");
	while (1) {
		printf("���������ӵ�����(row,col):\n");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		//�жϺϷ�
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("�������������,����������.\n");
			continue;
		}
		if (chessBoard[row][col] != ' ') {
			//λ�ó�ͻ
			printf("��λ���Ѿ����ӹ���,����������.\n");
			continue;
		}
		//����
		chessBoard[row][col] = 'x';
		break;
	}
}

void computerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' ') {
			//λ�ó�ͻ
			continue;
		}
		chessBoard[row][col] = 'o';
			break;
	}
}

//1��ʾ��
//0û��
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
	//����x,��һ�ʤ
	//����o,���Ի�ʤ
	//���� ,ʤ��δ��
	//����q,��ʾ����
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
	//�ж�����
	if (isFull(chessBoard)) {
		return 'q';
	}
	//ʤ��δ��
	return' ';
}

int main() {
	char chessBoard[MAX_ROW][MAX_COL];
	
	//1.�����̽��г�ʼ��
	init(chessBoard);
	char winner = " ";
	while (1) {
		//2.��ӡ����
		print(chessBoard);
		//3.�������
		playerMove(chessBoard);
		//4.�ж�ʤ��
		char winner = gameOver(chessBoard);
		if (winner != ' ') {
			break;
		}
		//5.��������
		computerMove(chessBoard);
		//6.�ж�ʤ��
		winner = gameOver(chessBoard);
		if (winner != ' ') {
			break;
		}
	}
	if (winner == 'x') {
		printf("��Ӯ��!\n");
	} if (winner == 'o') {
		printf("������.....\n");
	}
	if(winner == 'q') {
		printf("������.....\n");
	}
	if (winner == ' ') {
		printf("ʤ��δ��\n");
	}
	return 0;
}