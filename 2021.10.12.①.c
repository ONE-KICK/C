#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int num = 0;
	int arr[] = { 1,2,3,4,5,6,7 };
	int left = 0;
	int right = 6;
	
	printf("������һ����num:");
	scanf("%d", &num);
	while (left <= right) {
		int mid = (left + right) / 2;
		if (num < arr[mid]) {
			//num�����,�ų��Ҳ����
			right = mid - 1;
		}
		else if (num > arr[mid]) {
			//num���Ҳ�,�ų�������
			left = mid + 1;
		}
		else {
			//num==mid�ҵ���
			printf("�ҵ�num��,num���±�Ϊ%d.\n", mid);
			break;
		}
	}if (left > right) {
		printf("û�ҵ������.\n");
	}
}