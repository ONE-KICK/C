#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void judgementYear(year) {
		while (1) {
		if (year % 400 == 0) {
			printf("%d这一年是闰年\n", year);
			break;
		}
		else if (year % 4 == 0 && year % 100 != 0) {
			printf("%d这一年是闰年\n", year);
			break;
		}
		else {
			printf("这个年份不是闰年！\n");
			break;
		}
	}
}
int main() {
	int year = 0;
	printf("请输入一个整数年份：\n");
	scanf("%d", &year);
	judgementYear(year);
	return 0;
}