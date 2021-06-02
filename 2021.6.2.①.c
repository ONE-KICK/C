#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Fun(int num){
	int arr[100][100] = { 0,1 };
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (int i = 1; i <= num; i++) {
		for (int k = 0; k <= num - i; k++) {
			printf(" ");//打印空格
		}
		for (int j = 1; j <= i; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int num = 0;
	printf("请输入打印的杨辉三角行数\n");
	scanf("%d", &num);
	Fun(num);
	return 0;
}