#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void figure(int num) {
	int x = 0;
	int y = 0;
	for (x = 1; x < num + 1; x++) {
		for (y = 1; y <= x; y++) {
			printf("%d*%d=%d ", x, y, x * y);
		}printf("\n");
	}
}
int main() {
	int num = 0;
	printf("请输入你想要几行几列(行列相同）的乘法口诀表：\n");
	scanf("%d", &num);
	figure(num);
	return 0;
}