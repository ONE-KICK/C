#include<stdio.h>

int main() {
	int x = 0;
	int y = 0;
	for (x = 1; x < 10; x++) {
		for (y = 1; y <= x; y++) {
			printf("%d*%d=%d ", x, y, x * y);
		}printf("\n");
	}
	return 0;
}