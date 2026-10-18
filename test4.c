#include <stdio.h>

int gcd(int a, int b)
{

    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main(void)
{
    int a = 0;
    int b = 0;
    scanf_s("%d%d", &a, &b);
    printf("%d", gcd(a, b));
    return 0;
}