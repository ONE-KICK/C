#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
	
void swap(int* x,int* y) {
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;

}

int main() {
	int a, b, c = 0;
	printf("请输入三个整数:\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b) {
		swap(&a, &b);
	}
	if (a < c) {
		swap(&a, &c);
	}
	if (b < c) {
		swap(&b, &c);
	}
	printf("%d %d %d", a, b, c);
}