#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void findNum(int arr[],int num) {
	int firstNum = 0;
	int lastNum = 10 - 1;
	while (firstNum <= lastNum) {
		int mid = (firstNum + lastNum) / 2;
		if (num < arr[mid]) {
			//num在左侧
			lastNum = mid - 1;
		}
		else if (num > arr[mid]) {
			//num在右侧
			firstNum = mid + 1;
		}
		else {
			printf("找到了,num的数组下标为%d.\n", mid);
			break;
		}
	}if (firstNum > lastNum) {
		printf("找不到数num.\n");
	}
}

int main() {
	int num = 0;
	int arr[10] = { 15,18,20,32,43,52,61,70,78,79 };
	printf("请输入要查找的数num:");
	scanf("%d", &num);
	findNum(arr,num);
}