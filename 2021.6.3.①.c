#include <stdio.h>

int main() {
	char murder = 'A';
	for (; murder < 'D'; murder++) {
		if (((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D')) == 3) {
			printf("������%c", murder);
		}
	}
	return 0;
}