#include<stdio.h>
#include<stdlib.h>
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半
int main() {
	for (int a=1; a <= 5; a++) {
		for (int b=1; b <= 5; b++) {
			for (int c=1; c <= 5; c++) {
				for (int d=1; d <= 5; d++) {
					for (int e=1; e <= 5; e++) {
						if (a * b * c * d * e == 120) {
							if ((b == 2) + (a == 3) == 1) {
								if ((b == 2) + (e == 4) == 1) {
									if ((c == 1) + (d == 2) == 1) {
										if ((c == 5) + (d == 3) == 1) {
											if ((e == 4) + (a == 1) == 1) {
												printf("a=%d,b=%d,c=%d,d=%d;e=%d", a, b, c, d, e);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}return 0;
}