#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int weight(int num) {
	int count = 0;
	while (num != 0) {
		if (num % 2 == 1) {
			count++;
		}
		num /= 2;
	}
	return count;
}

int main() {
	int num = 0;
	printf("������һ������,�����ӡ����������1�ĸ���:\n");
	scanf("%d", &num);
	printf("%d\n", weight(num));
}