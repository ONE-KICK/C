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
	//�������ʮ��λ����Ϊ����~~
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

//����һ�������߱�ͬʱ��ӡ���ֵ�ͼ�Ĺ���
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
	int count = 0;//��Χ���׵ĸ���
	for (int r = row - 1; r <= row + 1; r++) {
		for (int c = col - 1; c <= col + 1; c++) {
			if (r < 0 || r >= MAX_ROW || c < 0 || c >= MAX_COL) {
				//�������̷�Χ
				continue;
			}
			if (r == row && c == col) {//����Ҫ�ж�,ֱ���´�ѭ��
				continue;
			}
			if (mineMap[r][c] == '1') {
				count++;
			}
		}
	}showMap[row][col] = '0' + count;
}

int main() {
	//1.������ͼ����ʼ��
	char showMap[MAX_ROW][MAX_COL] = { 0 };
	char mineMap[MAX_ROW][MAX_COL] = { 0 };
	init(showMap, mineMap);
	int openedCount = 0;
	while (1) {
		//2.��ӡ��ͼ
		system("cls");
		print(showMap);
		//print(mineMap);
		//3.�����������
		int row = 0;
		int col = 0;
		printf("����������:\n");
		scanf("%d %d", &row, &col);
		//�ж�����Ϸ�
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("���������������!����������!\n");
			continue;
		}
		if (showMap[row][col] != '*') {
			printf("��λ���Ѿ�������,����������!\n");
			continue;
		}
		//�ж��Ƿ����
		if (mineMap[row][col] == '1') {
			printf("�ȵ�������!!!��Ϸ����!\n");
			break;
		}
		//5.����showMap,��ʾ��Χ��������
		update(showMap, mineMap, row, col);
		//6.������Ϸʤ�����ж�
		openedCount++;
		if (openedCount == MAX_ROW * MAX_COL - MINE_COUNT) {
			printf("��ϲ��Ӯ��!\n");
			break;
		}
	}
	return 0;
}