#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* zuo_xuan(char* arr, int k)//返回值为指针类型，故为char *
{
	char* start = arr;
	char* end = arr;//start和end均指向arr数组首元素
	while (*end != '\0')
	{
		end++;//得到\0的下标
	}
	while (k)
	{
		*(end + 1) = *end;//\0往后移一位
		*(end++) = *(start++);//把首元素移至最后
		k--;//控制左旋元素个数
	}
	return start;//返回左旋后数组首元素的下标
}
int main()
{
	char arr[] = "0";
	int m = 0;
	printf("请输入你要左旋的字符串：");
	scanf("%s", arr);
	printf("请输入你要左旋的位数：");
	scanf("%d", &m);
	printf("左旋后的字符串是：%s", zuo_xuan(arr, m));
	system("pause");
	return 0;
}
