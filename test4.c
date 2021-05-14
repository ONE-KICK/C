#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int arr[10] = { 0 };
	int i = 0;
	int max = 0;
	printf("请输入十个整数。");
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("最大的数为%d。", max);
	return 0;
}