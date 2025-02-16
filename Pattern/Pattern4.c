//Write the output of the code given below printing pattern.
#include <stdio.h>

int main()
{
    int i, j, r, c,k;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (i == 1 || i == r || j == 1 || j == c)
                printf("0 ");
                else if(i==3||j==3)
                printf("  ");      
            else
                printf("# ");
        }
        printf(" \n");
        
    }

    return 0;
}