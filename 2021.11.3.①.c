#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int isPrime(int num){
	//return 0ʱ�������Ϊ����,return 1�����Ϊ����.
	if (num == 0 || num == 1) {
		return 0;
		//0��1��Ϊ����;
	}
	if (num < 0) {
		printf("���������Ϊ��Ȼ��!");
		return 0;
	}
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return 0;
		}
	}return 1;
}

int main(){
	int num = 0;
	printf("������һ����Ȼ��,�ж����ǲ�������:\n");
	scanf("%d", &num);
	int a=isPrime(num);
	if (a == 1) {
		printf("����Ϊ����!\n");
	}
	else if (a == 0) {
		printf("������Ϊ����!\n");
	}
	return 0;
}