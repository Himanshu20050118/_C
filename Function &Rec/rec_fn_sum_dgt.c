#include <stdio.h>
int sum_digit(int);
int sum_digit(int n)
{
    if (n == 0)
        return 0;
    else if (n < 0)
    {
        n = -n;
        return (n % 10) + sum_digit(n / 10);
    }
    else
        return (n % 10) + sum_digit(n / 10);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("The sum of digit of a number is:%d", sum_digit(n));
    return 0;
}