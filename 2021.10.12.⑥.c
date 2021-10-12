#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int a, b = 0;
	for (int a = 1; a < 10; a++) {
		for (int b = 1; b < 10; b++) {
			printf("%d*%d=%d ", a, b, a * b);
		}printf("\n");
	}
}