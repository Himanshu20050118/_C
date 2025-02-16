#include <stdio.h>
int main()
{
    int i, j, k = 1,count=0;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            for (k = 1; k <= 3; k++)
            {
                printf("%d", k);
              
                
            }
            printf("\n");
              count++;
           
        }
    }
    printf("%d\n", count);
        return 0;
    }
