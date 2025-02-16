#include <stdio.h>
int main()
{
    int a,b,small,x,y;
    printf("Enter two numbers to find HCF and LCM");
    scanf("%d%d", &a, &b);
    x = a;
    y = b;
    if (a <= 0 && b < 0)
    {
        printf("invalid input");
        return 0;
    }
    if (b > a)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    while (b != 0)
    {
        small = b;
        b = a % b;
        a = small;
    }
    printf("HCF of %d and %d is %d", x, y, a);
    return 0;
}