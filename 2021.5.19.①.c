#include<stdio.h>

int strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abc";
	int len = strlen(arr);
	printf("%d\n", len);
	return 0;
}