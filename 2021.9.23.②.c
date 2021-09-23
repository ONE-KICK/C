#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void print(){
	int a, b = 0;
	for (a = 1000; a <= 2000; a++) {
		if (a % 4 == 0 && a % 100 != 0||a%400==0) {
			printf("%d\n", a);
		}
	}
}

int main() {
	print();
}