#include<stdio.h>
int main() {
	int a[5] = { 12,21,32,65,44 };
	int b[5] = { 5,6,8,7,9 };
	for (int i = 0; i < 5; i++) {
		int tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", b[i]);
	}
	return 0;
}