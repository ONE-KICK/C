#include<stdio.h>
#include<stdlib.h>
	
int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

void swap(int* a, int* b) {
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void DiyQsort(void*arr,int num,int size,int(*compare)(const void*p1,const void*p2)) {
	int bound = 0;
	int cur = num - 1;
	for (cur = num - 1; cur >= 0; cur--) {
		for (bound = 0; bound < cur; bound++) {
			//ÉýÐòÅÅÁÐ
			if (compare((int*)arr + bound, (int*)arr + bound + 1) > 0) {
				swap((int*)arr + bound, (int*)arr + bound + 1);
				}
			}
		}
}


int main() {
	int arr[] = { 3,4,2,40,8,7,5,9,30,11 };
	int size = sizeof(arr) / sizeof(arr[0]);
	DiyQsort(arr, size, sizeof(arr), compare);
	for (int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}