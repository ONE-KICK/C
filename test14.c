#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num = 0;
	int i = 0;
	int sum = 1;
	printf("������һ������������������Ľ׳ˡ�\n");
	scanf("%d", &num);
	if (num == 0)
	{
		printf("�׳�Ϊ0��\n");
	}
	else if (num == 1)
	{
		printf("�׳�Ϊ1��\n");
	}
	else
	{
		for (i = 2; i <= num; i++)
		{
			sum = sum * i;

		}
		printf("�׳�Ϊ%d��\n", sum);
	}
	return 0;
}