#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int arr[], int size) {
	int bound = 0;//bound为边界
	for (bound = 0; bound < size; bound++) {
		//通过bound来控制循环的次数
		//[0,bound]已排序区间
		//[bound,size]待排序区间
		for (int cur = size - 1; cur > bound; cur--) {
			//不符合升序则交换大小
			if (arr[cur - 1] > arr[cur]) {
				int tmp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = tmp;
			}
		}
	}
}

int main() {
	int arr[8] = { 9,7,10,11,18,17,16,4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, size);
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}