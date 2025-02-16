#include <stdio.h>
void binary(int num)
{
    int i, q = num, rem, bin = 0, c = 1;
    while (q != 0)
    {
        rem = q % 2;
        bin += rem * c;
        c *= 10;
        q /= 2;
    }
    printf("Binary equivalent of %d is %d\n", num, bin);
}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    binary(n);
    return 0;
}