#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int reverse(char* str) {
	char tmp = *str;
	int len = strlen(str);//Çó×Ö·û´®³¤¶È
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (strlen(str) > 1) {
		reverse(str + 1);
	}
	*(str + len - 1) = tmp;
}

int main() {
	char str[] = "abcdefg";
	reverse(str);
	printf("%s\n", str);
}