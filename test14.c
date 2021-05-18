#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num = 0;
	int i = 0;
	int sum = 1;
	printf("请输入一个整数，将会求出它的阶乘。\n");
	scanf("%d", &num);
	if (num == 0)
	{
		printf("阶乘为0。\n");
	}
	else if (num == 1)
	{
		printf("阶乘为1。\n");
	}
	else
	{
		for (i = 2; i <= num; i++)
		{
			sum = sum * i;

		}
		printf("阶乘为%d。\n", sum);
	}
	return 0;
}