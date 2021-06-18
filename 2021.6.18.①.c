#include<stdio.h>
#include<stdlib.h>
	
int compare(const void* a, const void* b) {
	return (*(char*)a - *(char*)b);
}

int main() {
	char str[] = { 1,2,8,9,5,7,4,3,88,99,11,55};
	int size = sizeof(str) / sizeof(str[0]);
	for (int i = 0; i < size; i++) {
		printf("%d ", str[i]);
	}
	printf("\n");
	qsort(str, size, sizeof(char), compare);
	for (int i = 0; i < size; i++) {
		printf("%d ", str[i]);
	}
	return 0;
}