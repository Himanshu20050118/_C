#include <stdio.h>
void deci(int num)
{
    int i, q = num, rem, dec = 0, c = 1;
    while (q != 0)
    {
        rem = q % 10;
        dec += rem * c;
        c *= 2;
        q /= 10;
    }
    printf("Decimal equivalent of %d is %d\n", num, dec);
}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    deci(n);
    return 0;
}