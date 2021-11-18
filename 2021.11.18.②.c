#include<stdio.h>
#include<stdlib.h>

int main() {
	//数组元素数相同
	int a[] = { 8,5,9,7,5 };
	int b[] = { 10,55,77,88,99 };
	int size = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < size; i++) {
		int tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}printf("\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", b[i]);
	}

	
}