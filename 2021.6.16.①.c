#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int findnum(int arr[][3], int x, int y, int k)
{
	int i = 0;
	int j = x - 1;
	while (i <= y && j >= 0)
	{
		if (arr[i][j] < k)
		{
			i++;
		}
		if (arr[i][j] > k)
		{
			j--;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}
int main()
{

	int k = 0;
	scanf("%d", &k);
	int arr[3][3] = { {1,3,5},{4,5,7},{5,8,9} };
	if (findnum(arr, 3, 3, k))
	{
		printf("找到了\n");
	}
	else
	{
		printf("找到了\n");
	}
}
