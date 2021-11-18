#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10
//��ͼΪ9*9,����Ϊ10��ɨ����Ϸ

void init(char showMap[MAX_ROW][MAX_COL],char mineMap[MAX_ROW][MAX_COL]) {
	memset(showMap, '*', MAX_ROW * MAX_COL);//showMap�ĵ�ͼ��ʼ��Ϊ*
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
	int row, col = 0;//������������
	int showCount = 0;//�Ѿ�������������
	//1.������ͼ����ʼ��.
	init(showMap, mineMap);
	//2.��ӡ��ͼ
	while (1) {
		system("cls");
		print(showMap, mineMap);
		//3.������뷭��������(�Ϸ��ж�)
		printf("����������:\n");
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW || col<0 || col>MAX_COL) {
			printf("�����������Ƿ�!!!����������:\n");
			Sleep(200);
			continue;
		}
		if (showMap[row][col] != '*') {
			printf("�������Ѿ�����,����������:\n");
			Sleep(200);
			continue;
		}
		//4.�ж��Ƿ����
		if (mineMap[row][col] == '1') {
			printf("������!!��Ϸ����\n");
			Sleep(200);
			break;
		}
		//5.����showMap,�ڷ�����λ����ʾ��Χ������
		updateShow(showMap, mineMap, row, col);
		//6.�ж�����Ƿ񷭿�����λ��
		showCount++;
		if (showCount == MAX_ROW * MAX_COL - MINE_COUNT) {
			printf("��ϲ��Ӯ��!!!\n");
			break;
		}
	}
}