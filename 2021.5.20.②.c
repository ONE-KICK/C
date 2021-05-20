#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Fac(int n, int k) {
	if (k == 0) {
		return 1;
	}
	else {
		return n * Fac(n, k - 1);
	}
}
int main() {
	int n = 0, k = 0;
	printf("请输入n和k：");
	scanf("%d%d", &n, &k);
	printf("n的k次方是：%d", Fac(n, k));
	return 0;
}