#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void figure(int num) {
	for (int n = 1; n < num+1; n++) {
		for (int m = 1; m <= n; m++) {
			printf("%d*%d=%d ", n, m, n * m);
			}printf("\n");
	}
}

int main() {
	int num = 0;
	printf("����������Ҫ���м��еĳ˷��ھ���:\n");
	scanf("%d", &num);
	figure(num);
}