#include <stdio.h>

// printf("enter number of rows: ");
// scanf("%d", &r);

// printf("enter number of col: ");
// scanf("%d", &c);

/*
oooooooooo
oooo  oooo
ooo    ooo
oo      oo
o        o
o        o
oo      oo
ooo    ooo
oooo  oooo
oooooooooo
*/
int main()
{
    int i, j, k;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (i == 0 || i == 9 || j == 0 || j == 9)
                printf("o");

            else if (j < 5 - i || j > 5 + i - 1)
                printf("o");

            else if (j < i - 4 || j > 13 - i)
                printf("o");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}