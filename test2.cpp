#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num, count = 0;
	for (num = 1; num <= 100; num++) {
		if (num % 10 == 9) {
			count++;
		}
		if (num / 10 == 9) {
			count++;
		}
	}
	printf("1到 100 的所有整数中出现%d个数字9", count);
	return 0;
}