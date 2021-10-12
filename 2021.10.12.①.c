#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int num = 0;
	int arr[] = { 1,2,3,4,5,6,7 };
	int left = 0;
	int right = 6;
	
	printf("请输入一个数num:");
	scanf("%d", &num);
	while (left <= right) {
		int mid = (left + right) / 2;
		if (num < arr[mid]) {
			//num在左侧,排除右侧的数
			right = mid - 1;
		}
		else if (num > arr[mid]) {
			//num在右侧,排除左侧的数
			left = mid + 1;
		}
		else {
			//num==mid找到了
			printf("找到num了,num的下标为%d.\n", mid);
			break;
		}
	}if (left > right) {
		printf("没找到这个数.\n");
	}
}