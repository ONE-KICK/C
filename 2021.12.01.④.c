#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//��ӡˮ�ɻ���
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
	//1.����ȡ������λ��count;
	//2.ȡ���������ÿһλ
	//3.����ϵ���
	return 0;
}