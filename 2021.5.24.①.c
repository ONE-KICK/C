#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int gongbeiNum(int m,int n,int i) {
	int tmp = 0;
	if (m < n) {
		tmp = m;
		m = n;
		n = tmp;
	}
	i = m;
	while (1) {
		if (i % m == 0 && i % n == 0) {
		break;
		}
		i++;
	}
	return i;
}

int main() {
	int m = 0;
	int n = 0;
	int i = 0;
	int ret = 0;
	scanf("%d %d", &m, &n);
	ret=gongbeiNum(m, n, i);
	printf("%d", ret);
	return 0;
}