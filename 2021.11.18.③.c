#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void init(int arr[],int size){//初始化功能,将数组中每个元素初始化为0
	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
}

void print(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}	printf("\n");
}

void reverse(int arr[], int size) {
	int left = 0;
	int right = size - 1;
	while (left < right) {
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int size = sizeof(arr) / sizeof(arr[0]);	
	print(arr, size);
	reverse(arr, size);
	print(arr, size);
	init(arr, size);
	print(arr, size);
}