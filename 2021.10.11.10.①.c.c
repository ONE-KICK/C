#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int lookup(int num,int *arr,int size)
{
	int left = 0;
	int right = size - 1;
	
	while (left <= right) 
	{
		int mid = (left + right) / 2;
		if (num < arr[mid])
		{
			right = mid - 1;
		}
		if (num > arr[mid]) {
			left = mid + 1;
		}
		if(num==arr[mid])
		{
			printf("%d\n", mid);
			break;
		}
		if (left > right) {
			printf("没找到这个数.\n");
		}
	}
	return 0;
}


int main() {
	int num = 0;
	scanf("%d", &num);
	int arr[] = { 11,15,16,17,19,32,40,45,55,60 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	lookup(num, p, size);
	//printf("%d", ret);
	return 0;
}
