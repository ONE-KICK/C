#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void changeNum(int* x, int* y) {
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main() {
	int n = 0;
	int i = 0;
	printf("请输入两个整数，它们将会被交换数值：\n");
	scanf("%d %d", &n, &i);
	printf("交换前数值为%d和%d\n", n, i);
	changeNum(&n, &i);
	printf("交换后数值为%d和%d\n", n, i);
	return 0;
}

