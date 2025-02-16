/*WAP to display the floyd triangle.
1
23
456
78910...... upto  n number of rows.*/

#include <stdio.h>

int main()
{
    int i, j, r;
    printf("Enter the number of rows:  ");
    scanf("%d", &r);
    int k = 1;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= i; j++, k++)
            printf("%d", k);
        printf("\n");
    }
    return 0;
}