#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void changeNum(int* x, int* y) {
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main() {
	int n = 0;
	int i = 0;
	printf("�������������������ǽ��ᱻ������ֵ��\n");
	scanf("%d %d", &n, &i);
	printf("����ǰ��ֵΪ%d��%d\n", n, i);
	changeNum(&n, &i);
	printf("��������ֵΪ%d��%d\n", n, i);
	return 0;
}

