#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void judgementYear(year) {
		while (1) {
		if (year % 400 == 0) {
			printf("%d��һ��������\n", year);
			break;
		}
		else if (year % 4 == 0 && year % 100 != 0) {
			printf("%d��һ��������\n", year);
			break;
		}
		else {
			printf("�����ݲ������꣡\n");
			break;
		}
	}
}
int main() {
	int year = 0;
	printf("������һ��������ݣ�\n");
	scanf("%d", &year);
	judgementYear(year);
	return 0;
}