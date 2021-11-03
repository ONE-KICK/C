#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int isPrime(int num){
	//return 0时则该数不为质数,return 1则该数为质数.
	if (num == 0 || num == 1) {
		return 0;
		//0和1不为质数;
	}
	if (num < 0) {
		printf("输入的数不为自然数!");
		return 0;
	}
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return 0;
		}
	}return 1;
}

int main(){
	int num = 0;
	printf("请输入一个自然数,判断它是不是质数:\n");
	scanf("%d", &num);
	int a=isPrime(num);
	if (a == 1) {
		printf("该数为质数!\n");
	}
	else if (a == 0) {
		printf("该数不为质数!\n");
	}
	return 0;
}