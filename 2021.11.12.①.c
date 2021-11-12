#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int myStrlen(char* str) {
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}

int main() {
	char str[] = "abcd";
	printf("%d", myStrlen(str));

}