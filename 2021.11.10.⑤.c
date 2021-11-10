#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int factor(int n) {
	if (n == 1) {
		return 1;
	}
			return n * factor(n - 1);
}

int main() {
	int num = 0;
	scanf("%d", &num);
	printf("%d", factor(num));

}