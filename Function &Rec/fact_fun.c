#include <stdio.h>
long long int fact(int);
long long int fact(int n)
{
    int c = 1;
    if (n > 0)
    {
        for (int i = n; i >= 1; i--)
            c *= i;
        return c;
    }
    else if (n == 0 || n == 1)
        return 1;
    else if (n <0)
        return -1;
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The factorial of a number is %lld", fact(n));
    return 0;
}