#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define P 1 //汽水的单价
#define C 2 //两个空瓶换一个汽水

int SodaChange(int n) {
	int ret = n / C;//空瓶兑换的汽水
	int empty = n / C + n % C;
	if (empty > 1) 
		return ret + SodaChange(empty);
	else 
		return ret;
}

int main() {
	int p = 0;//金额
	int n = 0;//金额能买的汽水
	printf("请输入金额:\n");
	scanf("%d", &p);
	n = p / P;
	int bottle = n + SodaChange(n);
	printf("%d瓶\n", bottle);
	return 0;
}