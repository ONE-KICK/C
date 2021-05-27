#include<stdio.h>

void Reverse(char str[]) {
	int n = strlen(str);
	int i = 0;
	char tmp = 0;
	for (i = 0; i < (n / 2); i++) {
		tmp = str[i];
		str[i] = str[n - i - 1];
		str[n - 1 - i] = tmp;
	}
}

int main() {
	char str[100];
	printf("ÇëÊäÈëÒ»¶ÎÓï¾ä:\n");
	gets(str);
	Reverse(str);
	printf("ÄæĞòºóÊä³öÎª:%s\n",str);
}