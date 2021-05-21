#include<stdio.h>
//int init(int arr[]) {
//	int a[10] = { 0 };
//}
int init(int arr[]) {
	for (int i = 0; i < 10; i++) {
		arr[i] = 0;
	}
	return 0;
}

int print(int arr[]) {
	for (int i = 0; i < 10; i++) {
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	return 0;
}
void reverse(int arr[10]) {
	for (int i = 9; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
}
int main() {
	int arr[10];
	init(arr);
	print(arr);
	reverse(arr);
	return 0;
}