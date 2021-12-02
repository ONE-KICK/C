#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define P 1  //单价	
#define C 2  //两个瓶子换一个
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水

int sodaChange(int n) {
	int ret = n / C;
	int empty = n / C + n % C;
	if (empty > 1) {
		return ret + sodaChange(empty);
	}
	else
	{
		return ret;
	}
}

int main() {
	int money = 0;//金额
	int n = 0;//金额买的汽水
	int bottle = 0;//总共的瓶子
	printf("请输入金额:\n");
	scanf("%d", &money);
	n = money / P;
	bottle=n+sodaChange(n);
	printf("%d元可以买%d瓶汽水", money, bottle);
}
