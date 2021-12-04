#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void func(int num) {
	int YANGHUI[100][100] = {0,1};
	for (int i=1; i <= num; i++) {
		for (int j=1; j <= i; j++) {
			YANGHUI[i][j] = YANGHUI[i - 1][j - 1] + YANGHUI[i - 1][j];
		}
	}for (int i = 1; i <= num; i++) {
		for (int k = num; k >= i; k--) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("%4d ", YANGHUI[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int num = 0;
	scanf("%d", &num);
	func(num);
	return 0;
}