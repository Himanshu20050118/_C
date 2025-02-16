#include <stdio.h>
int main()
{
    int i, j, k, r1, c1, r2, c2;
    printf("Enter no. of rows and columns of matrix x: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter number of rows and columns of matrix y: ");
    scanf("%d %d", &r2, &c2);
    int x[r1][c1], y[r2][c2], z[10][10] = {0};
    if (c1 != r2)
    {
        printf("Multiplication not possible");
        return 0;
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Enter element at x:(%d%d)", i, j);
            scanf("%d", &x[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("Enter element at y:(%d%d)", i, j);
            scanf("%d", &y[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
                z[i][j] += x[i][k] * y[k][j];
        }
    }
    printf("Resultant matrix z is: ");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        printf("%d ", z[i][j]);
        // printf("\n");
    }
    return 0;
}