#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a, b;
int main()
{
    printf("请输入两个整数:");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("两个整数中较大的是%d", a);
    else if (a == b)
        printf("两个整数一样大，数值为%d", a);
    else
        printf("两个整数中较大的是%d", b);
    return 0;
}