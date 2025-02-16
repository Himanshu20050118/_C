#include <stdio.h>
int main()
{
    int i, r, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= r - i; j++)
            printf(" ");
        {
            // for (k = 1; k <= i; k++)  
            //     printf("%d", k);
            // {
            //     for (int s = i - 1; s >= 1; s--)
            //         printf("%d", s);
            // }
            for (k = i; k <2*i; k++)  
                printf("%d", k);
            {
                for (int s = 2*i - 2; s >= i; s--)
                    printf("%d", s);
            }
        }
        printf("\n");
    }
    return 0;
}
