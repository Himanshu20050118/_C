#include <stdio.h>
int sum_digit(int);
int sum_digit(int n)
{
    int q,r, sum = 0;
    q=n;
    while (q!= 0)
    {
        r = q % 10;
        sum += r;
        q = q / 10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("The sum of digit of a number is:%d",sum_digit(n));

    return 0;
}