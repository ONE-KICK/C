#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Isrotatingstr(char arr[], char str[]) {
	char arr1[1024] = { 0 };
	strcpy(arr1, arr);
	strcat(arr1, arr);
	int ret = strstr(arr1, str);
	if (ret == NULL) {
		return 0;
	}
	return 1;
}

int main() {
	char arr[] = "abcdef";
	char str[] = "defabc";
	int ret = Isrotatingstr(arr, str);
	if (ret == 1) {
		printf("是旋转字符\n");
	}
	else if (ret == 0) {
		printf("不是旋转字符串\n");
	}
	return 0;
}