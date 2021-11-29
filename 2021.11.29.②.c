#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void Reverse(char str[]) {
	char* left = str;
	char* right = str + strlen(str)-1;
	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		++left;
		--right;
	}
}

int main() {
	char str[] = "abcdef";
	Reverse(str);
	printf("%s", str);
}