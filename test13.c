#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int factor(int num) {
	if (num == 1) {
		return 1;
	}
	else {
		return num * factor(num - 1);
	}
}

int main() {
	int num = 0;
	printf("������һ������������������Ľ׳ˡ�\n");
	scanf("%d", &num);
	factor(num);
	int ret = factor(num);
	printf("%d�Ľ׳�Ϊ%d��\n", num, ret);
	return 0;
}
