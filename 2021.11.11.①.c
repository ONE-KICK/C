#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Fibonacci(int num) {
	if (num == 2||num==1) {
		return 1;
	}
	return Fibonacci(num - 1) + Fibonacci(num - 2);
}

int main() {
	int num = 0;
	scanf("%d", &num);
	printf("%d\n", Fibonacci(num));
}
//求第N个斐波那契 递归