#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void swap(int* a,int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int a, b = 0;
	scanf("%d %d", &a, &b);
	swap(&a,&b);
	printf("a=%d b=%d\n", a, b);
}