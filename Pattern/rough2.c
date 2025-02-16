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
            for (k = 1; k <= i; k++)
            {
                printf("%d", k);
                
            }
        }printf("\n");
    }
    return 0;
}
