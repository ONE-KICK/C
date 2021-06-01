#include <stdio.h>
#include <math.h>

int main() {
	int i = 1;
	printf("0到100000的水仙花数为:\n");
	for (; i <= 100000; i++) {
		int count = 1;
		int temp = i;
		int sum = 0;
		while (temp / 10) {
			count++;
			temp/=10;
		}
		temp = i;
		while (temp) {
			sum += pow(temp%10, count);
			temp /= 10;
		}
		if (i == sum) {
			printf("%d ", sum);
		}
	}
	return 0;
}