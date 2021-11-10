#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int factor(int n) {
	int ret = 1;
	while (n > 1) {
		ret = ret * n;
		n--;
	}return ret;
}

int main() {
	int num = 0;
	scanf("%d", &num);
	printf("%d", factor(num));

}