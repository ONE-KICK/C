#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int isSamestr(char arr[],char str[]) {
	char arr1[1024] = { 0 };
	strcpy(arr1, arr);
	strcat(arr, arr1);//���ַ������ƺ�����,�ж��Ƿ���abcdabc
	int ret=strstr(arr, str);
	if (ret == NULL) {
		return 0;
	}
	return 1;
}

int main() {
	char arr[] = "abcdef";
	char str[] = "defabc";
	int ret = isSamestr(arr,str);
	if (ret == 1) {
		printf("����ת�ַ�\n");
	}
	else if(ret == 0){
		printf("������ת�ַ�\n");
	}
	return 0;
}