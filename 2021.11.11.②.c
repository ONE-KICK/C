#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int myStrlen(char* str) {
	if (*str == '\0') {
		return 0;
	}
		return 1 + myStrlen(str + 1);
}

int main() {
	char str[] = "abcd";
	printf("%d", myStrlen(str));
}