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
	printf("1�� 100 �����������г���%d������9", count);
	return 0;
}