#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//打印水仙花数
int main() {
	int i = 0;
	for (; i < 100000; i++) {
		int tmp = i;
		int count = 1;
		int sum = 0;
		while (tmp / 10) {
			count++;
			tmp =tmp/ 10;
		}
		tmp = i;
		while (tmp) {
			sum += pow(tmp % 10, count);
			tmp =tmp/ 10;
		}
		if (sum == i) {
			printf("%d ", i);
		}
	}
	//1.首先取出数的位数count;
	//2.取出这个数的每一位
	//3.求符合的数
	return 0;
}