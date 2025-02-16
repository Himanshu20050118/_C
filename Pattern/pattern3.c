//Write the output of the code given below printing pattern.
#include <stdio.h>

int main()
{
    int i, j, r;
    char ch;
    // printf("Enter the character: ");
    // scanf("%c", &ch);
    printf("Enter the number of rows:  ");
    scanf("%d", &r);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= i; j++)
            // printf("%c ", ch);
            printf("*");
        printf("\n");
    }
    // Reverse loop
    /*for (i = 1; i <= r; i++)
    {
        for (j = r; j> i; j--)
            // printf("%c ", ch);
            printf("*");
        printf("\n");
    }*/

    return 0;
}
