#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int i = 0;
	int count = 0;
	for (i = 0; i < 100; i++) {
		if (i / 10 == 9) {
			count++;
		}
		if (i % 10 == 9) {
			count++;
		}
	}
	printf("100以内出现9的次数为%d.\n", count);
}