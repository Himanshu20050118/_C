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
    long long int f=0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (int i = 2; i <=2*n; i+=2)
        f+=fact(i);
    printf("The sum of factorial of series upto n terms is %lld",f);
    return 0;
}