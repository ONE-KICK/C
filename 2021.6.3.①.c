#include <stdio.h>

int main() {
	char murder = 'A';
	for (; murder < 'D'; murder++) {
		if (((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D')) == 3) {
			printf("Ð×ÊÖÊÇ%c", murder);
		}
	}
	return 0;
}