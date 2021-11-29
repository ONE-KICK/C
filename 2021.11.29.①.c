#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printarr(int arr[], int size) {
	int* p = arr;
	for (int i = 0; i < size; i++) {
		printf("%d ", *p);
		p++;
	}

}

int main() {
	int arr[] = { 1,2,3,4,5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	printarr(arr,size);
	return;
}