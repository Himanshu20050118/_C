// WAP to check whether the input numbr is a Armstrong number or not.
#include <stdio.h>
#include <math.h>
int main()
{
    int r, n, a, count = 0, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    a = n;
    while (a != 0)
    {
        a = a / 10;
        count++;
    }
    a = n;
    while (a != 0)
    {
        r = a % 10;
        sum += pow(r, count);

        a = a / 10;
    }
    if (sum == n)
        printf("%d is a armstrong number ", n);
    else
        printf("%d is not a armstrong number", n);
    return 0;
}