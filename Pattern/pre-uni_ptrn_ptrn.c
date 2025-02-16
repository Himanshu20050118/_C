//Very important pattern.......
#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    for (int i = 0; i <r; i++)
    {
        for (int j = 65; j <=64 + r - i; j++)
            printf("%c ", j);
        for (int k = 1; k <2 * i ; k++)
            printf("  ");
        for (int l = 64 + r - i; l >= 65; l--)
        {
            if(l!=64+r)
            printf("%c ", l);
        }
        if(i<r-1)
        printf("\n");
    }
    // for (int i = r; i >=0; i--)
    // {
    //     for (int j = 65; j <=64 + r - i; j++)
    //         printf("%c ", j);
    //     for (int k = 1; k <2 * i ; k++)
    //         printf("  ");
    //     for (int l = 64 + r - i; l >= 65; l--)
    //     {
    //         if(l!=64+r)
    //         printf("%c ", l);
    //     }
    //     printf("\n");
    // }

    return 0;
}