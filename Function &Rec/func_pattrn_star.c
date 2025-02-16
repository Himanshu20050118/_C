#include <stdio.h>
void star(char, int);
void star(char ch, int rows)
{
    int i,j,k;
    for ( i = 1; i <=rows; i++)
    {
        for ( k = 1; k<=rows - i; k++)
            printf("  ");
    // for ( j = 1; j< 2 * i; j++)
    for ( j = 1; j<=i; j++)
        printf("%c ", ch);
        printf("\n");
    }
    for ( i = rows-1; i>=1; i--)
    {
        for ( k = 1; k<=rows - i; k++)
            printf("  ");
    // for ( j = 1; j< 2 * i; j++)
    for ( j = 1; j<=i; j++)
        printf("%c ", ch);
        printf("\n");
    }
}
int main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    star('#',r);
     return 0;
}