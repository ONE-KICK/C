#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	float i = 0;
	float sum = 1;
	int a = 1;
	for (i = 2; i < 100; i++) {
		a = -a;
		sum = sum + a * (1 / i);
	}
	printf("分数求和结果为%f.\n", sum);
}