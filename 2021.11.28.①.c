#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int diffBit(int m,int n) {
	int count = 0;
	int tmp = m ^ n;
	while (tmp) {
		tmp = tmp & (tmp - 1);
		count++;
	}
}

int main() {
	int m, n = 0;
	scanf("%d %d", &m, &n);
	int diff=diffBit(m, n);
	printf("%d", diff);
}