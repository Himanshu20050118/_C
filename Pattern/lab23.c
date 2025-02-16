#include <stdio.h>
int main()
{
    int i, j, k,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for (int i = 0; i <=n; i++)
    {
        k = n/2;
        for (int j = 1; j<=n; j++)
        {
            if (((j <= n/2 - i || j > n/2+2 + i) && i <= n/2)||((j<=i-n/2||j>=n+1-k)&&i>n/2))
                printf(" ");
            else
            {
                printf("%d ", k);
                k--;
                j++;
            }
        }
        printf("\n");
    }

    return 0;
}