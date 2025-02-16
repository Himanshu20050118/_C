#include <stdio.h>
void dec(int num)
{
    int i, q = num, rem, deci = 0, c = 1;
    while (q != 0)
    {
        rem = q % 10;
        deci += rem * c;
        c *= 8;
        q /= 10;
    }
    printf("Decimal equivalent of %o is %d\n", num, deci);
}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    dec(n);
    return 0;
}