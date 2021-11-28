#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int func(int num) {
	int count = 0;
	for (int i = 0; i < 32; i++) {
		if (num & (1 << i)) {
			count++;
		}
	}return count;
}

int main() {
	int num = 0;
	scanf("%d", &num);
	int ret = (func(num));
	printf("%d", ret);
	return 0;
}