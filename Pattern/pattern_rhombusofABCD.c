#include <stdio.h>
/*
                A
            A   B   A
        A   B   C   B   A
    A   B   C   D   C   B   A
        A   B   C   B   A
            A   B   A
                A

*/

int main()
{
    char a, b;
    int i, j, r;
    printf("enter number of rows: ");
    scanf("%d", &r);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= r - i; j++)
            printf("  ");
        {

            for (a = 65; a < 65 + i; a++)
                printf("%c ", a);

            for (b = 65 + i - 2; b >= 65; b--)
            {
                printf("%c ", b);
            }

            printf("\n");
        }
    }
    for (i = r-1; i >=1; i--)
    {
        for (j = 1; j <= r - i; j++)
            printf("  ");
        {

            for (a = 65; a < 65 + i; a++)
                printf("%c ", a);

            for (b = 65 + i - 2; b >= 65; b--)
            {
                printf("%c ", b);
            }

            printf("\n");
        }
    }

    return 0;
}