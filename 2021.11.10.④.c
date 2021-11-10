#include<stdio.h>
#include<stdlib.h>

int myStrlen(char* str) {
	if (str[0] == '\0') {
		return 0;
	}return 1 + myStrlen(str + 1);
}

int main() {
	printf("%d", myStrlen("88888888"));
	return 0;
}