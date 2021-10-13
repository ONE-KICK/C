#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>

int main() {
	char str1[] = "welcome to real madrid!";
	char str2[] = "#######################";
	int left = 0;
	int right = strlen(str1) - 1;
	printf("%s\n", str2);
	while(left <= right) {
		system("cls");
		str2[left] = str1[left];
		str2[right] = str1[right];
		left++;
		right--;
		printf("%s\n", str2);
		Sleep(500);
	}
}