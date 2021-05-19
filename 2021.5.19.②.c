#include<stdio.h>

int Strlen(char* str)
{
	if (*str != '\0')
		return 1 + Strlen(str + 1);//str++
	else
		return 0;
}

int main()
{
	char arr[] = "abc";
	int len = Strlen(arr);
	printf("%d\n", len);
	return 0;
}