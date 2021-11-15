#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
void bubbleSort(int arr[],int size) {
	int bound = size-1;//bound边界,控制循环次数
	int cur = 0;
	for (bound = size-1; bound >= 0; bound--) {
		for (cur = 0; cur < bound; cur++) {
			if (arr[cur] > arr[cur+1]) {
				int tmp = arr[cur];
				arr[cur] = arr[cur + 1];
				arr[cur + 1] = tmp;
			}
		}
	}
}

int main() {
	int arr[] = { 8,4,9,87,10,13,2,6,1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr,size);
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}