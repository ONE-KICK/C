#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>//ì³²¨ÄÇÆõ (·ÇµÝ¹é)

int Fibonacci(int n,int ret) {
		if (n == 1 || n == 2) {
		return 1;
		}
		int num1 = 1;
		int num2 = 1;
			for (int i = 3; i <= n; i++) {		
				ret = num1 + num2;
				num1 = num2;
				num2 = ret;
			}return ret;
}

int main() {
	int num = 0;
	int ret = 0;
	scanf("%d", &num);
	printf("%d", Fibonacci(num,ret));
}