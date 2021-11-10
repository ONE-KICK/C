#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int myStrlen(char* str) {
	int count = 0;
	while (str[count] != '\0') {
		count++;
	}
	return count;
}

int main() {
	printf("%d", myStrlen("abcd"));

	return 0;
}