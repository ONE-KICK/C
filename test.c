#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a, b;
int main()
{
    printf("��������������:");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("���������нϴ����%d", a);
    else if (a == b)
        printf("��������һ������ֵΪ%d", a);
    else
        printf("���������нϴ����%d", b);
    return 0;
}