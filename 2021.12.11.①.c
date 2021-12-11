#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char* strSpin(char* str,int k) {
	char* start = str;
	char* end = str;
	while (*end!='\0') {
		end++;
	}
	while(k) {
		*(end + 1) = *end;
		*(end++) = *(start++);
		k--;
	}return start;
}

int main() {
	char str[] = "0";
	int num = 0;
	printf("ÇëÊäÈë×Ö·û´®:\n");
	scanf("%s", str);
	printf("ÇëÊäÈë×óĞı¼¸¸ö×Ö·û:\n");
	scanf("%d", &num);
	printf("×óĞıK¸ö×Ö·ûºó:%s", strSpin(str, num));
}