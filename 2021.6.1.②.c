#include <stdio.h>

int main() {
	char str[] = "             ";
	int i = 0;
	int j = 0;
	for (i = (strlen(str) / 2), j = (strlen(str) / 2); i >= 0 && j <= strlen(str); i--, j++) {
		str[i] = '*';
		str[j] = '*';
		printf("%s\n", str);
	}
	for (i = 0, j = (strlen(str) - 1); i < (strlen(str) / 2) && j >= (strlen(str) / 2); i++, j--) {
		str[i] = ' ';
		str[j] = ' ';
		printf("%s\n", str);
	}
	return 0;
}