#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX_ROW 3
#define MAX_COL 3

void init(char chess[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			chess[row][col] = ' ';
		}
	}
}

void print(char chess[MAX_ROW][MAX_COL]) {
	printf("+---+---+---+\n");
	for (int row = 0; row < MAX_ROW; row++) {
		printf("|");
		for (int col = 0; col < MAX_COL; col++) {
			printf(" %c |", chess[row][col]);
		}
		printf("\n+---+---+---+\n");
	}
}

void playerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("�������....\n");
	while (1) {
		printf("����������(row col): ");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		// ���кϷ���У��, �ж��û�����������Ƿ��ǺϷ���
		// ������Ϸ�, �����û���������
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			// ���ǲ��Ϸ�, ����Ҫ���û���������
			printf("�����������Ƿ�! ����������!\n");
			continue;
		}
		// �����û�������1, 1, ���� 1 1 λ���Ѿ�������~~ 
		if (chessBoard[row][col] != ' ') {
			// ��λ���Ѿ�������
			printf("�������λ���Ѿ�������, ����������!\n");
			continue;
		}
		// ��������~~
		chessBoard[row][col] = 'x';
		break;
	}
}

void computerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' ') {
			// ���λ���Ѿ�������
			continue;
		}
		chessBoard[row][col] = 'o';
		break;
	}
}

// ���� 1 ��ʾ����, ���� 0 ��ʾû��
int isFull(char chessBoard[MAX_ROW][MAX_COL]) {
	// ��������, ������û�пո�. �пո����û��~~
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (chessBoard[row][col] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}

// ������� x, ��ʾ ��һ�ʤ
// ������� o, ��ʾ ���Ի�ʤ
// ������� ' ', ��ʾʤ��δ��, ��Ҫ��������
// ������� q, ��ʾ����
char isGameOver(char chessBoard[MAX_ROW][MAX_COL]) {
	// ɨ�����е���, ���е���, �Լ������Խ���~~
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
	// �ж��Ƿ����
	if (isFull(chessBoard)) {
		return 'q';
	}
	// ʤ��δ��
	return ' ';
}

int main() {
	char chessBoard[MAX_ROW][MAX_COL];
	// 1. �����̽��г�ʼ��
	init(chessBoard);
	char winner = ' ';
	while (1) {
		// 2. ��ӡ����
		system("cls");
		print(chessBoard);
		// 3. �������
		playerMove(chessBoard);
		// 4. �ж�ʤ��
		winner = isGameOver(chessBoard);
		if (winner != ' ') {
			// ��Ϸ����
			break;
		}
		// 5. ��������
		computerMove(chessBoard);
		// 6. �ж�ʤ��
		winner = isGameOver(chessBoard);
		if (winner != ' ') {
			// ��Ϸ����
			break;
		}
	}
	if (winner == 'x') {
		printf("��ϲ��Ӯ��!\n");
	}
	else if (winner == 'o') {
		printf("��զ���˹����϶��²���!\n");
	}
	else {
		printf("����˹��������忪!\n");
	}
	return 0;
}