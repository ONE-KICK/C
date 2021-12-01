#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int arr[10] = { 1,2,3,4,5,6,7 };
	int* p = &arr;
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++) {
		printf("%d ", *(p + i));
	}
}