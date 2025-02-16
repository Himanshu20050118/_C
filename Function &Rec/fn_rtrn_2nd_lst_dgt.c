#include <stdio.h>

int func(int n)
{
    int x;
    if (n / 10 == 0)
        return -1;
    else
    {
        if (n < 0)
        {
            n *= -1;
        }
        x = n / 10;
        return (x % 10);
    }
}

int main()
{
    int p;
    printf("Enter the number: ");
    scanf("%d", &p);
    if (func(p) == -1)
        printf("%d is a single digit number", p);
    else
        printf("Second last digit of a number %d is %d", p, func(p));
    return 0;
}