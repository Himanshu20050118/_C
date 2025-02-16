#include <stdio.h>
void octa(int num)
{
    int i, q = num, rem, oct = 0, c = 1;
    while (q != 0)
    {
        rem = q % 8;
        oct += rem * c;
        c *= 10;
        q /= 8;
    }
    printf("octadecimal equivalent of %d is %o\n", num, oct);
}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    octa(n);
    return 0;
}