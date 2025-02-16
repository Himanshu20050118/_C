// Write the output of the code given below printing pattern.
#include <stdio.h>

int main()
{
    int i, j, r, c;
    char ch1, ch2;
    printf("Enter the two character: ");
    scanf("%c %c", &ch1, &ch2);
    do
    {
        printf("Enter the odd number of rows: ");
        scanf("%d", &r);
    } while (r % 2 == 0);
    do
    {
        printf("Enter the odd  number of columns: ");
        scanf("%d", &c);
    } while (c % 2 == 0);

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (i == r / 2 + 1 || j == c / 2 + 1)
                printf("%c", ch1);
            else
                printf("%c", ch2);
        }
        printf(" \n");
    }

    return 0;
}