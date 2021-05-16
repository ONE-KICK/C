#include<stdio.h>
void judgement(num) {
	int i = 0;
	for (i = 2; i < num; i++) {
		if (num % i == 0)
			break;
	}if (i == num) {
		printf("%d\n", num);
	}
}

int main() {
	int num = 100;
	for (num == 100; num < 200; num++) {
		judgement(num);
	}
	return 0;
}