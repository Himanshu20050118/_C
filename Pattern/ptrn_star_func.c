#include <stdio.h>

void star(int r, char a)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <=r- i; j++)
            printf(" ");
    //     for (int k = 1; k <=i; k++)
    //         printf("%c ", a);
    //     printf("\n");
    // } 
    for (int k = 1; k <2*i; k++)
            printf("%c", a);
        printf("\n");
    }
}
int main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    star(r, '$');
    // printf("\n\n\n\n\n");
    // star(5, 'k');
    
    return 0;
}