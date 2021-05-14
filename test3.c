#include <stdio.h>
int main()
{
    float i;
    int m = 1;
    float sum = 1;
    for (i = 2; i <= 100; i++)
    {
        m = -m;
        sum = sum + m * (1 / i);
    }
    printf("%f", sum);
    return 0;
}