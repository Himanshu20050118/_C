
// sum of series 2!+4!+6!+........upto n terms
#include <stdio.h>
long long int fact(int n);
long long int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else if (n < 0)
        return -1;
    else
        return n * fact(n - 1);
}
int main()
{
    int n;
    long long int f = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (int i = 2; i <= 2 * n; i += 2)
        f += fact(i);
    printf("The sum of factorial of series upto n terms is %lld",f);
    return 0;
}