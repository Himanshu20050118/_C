/*
A B C D E F E D C B A
A B C D E   E D C B A
A B C D       D C B A
A B C           C B A
A B               B A
A                   A
*/
// #include<stdio.h>
// int main(){
//     int i,j,n;
//     char k=65;
//     printf("Enter number of rows:");
//     scanf("%d",&n);
//     printf("\n");
//     for(i=0;i<n;i++)
//     { for(j=1;j<=2*n-1;j++)
//       { if(j<=n-i||j>=n+i)
//           printf("%c ",k);
//         else
//           printf("  ");
//         j<n?k++:k--;
//       }
//      k=65;
//      printf("\n");
//     }
//     return 0;

/*
A B C D E F E D C B A
A B C D E   E D C B A
A B C D       D C B A
A B C           C B A
A B               B A
A                   A
*/
#include <stdio.h>
int main()
{
    int i, j, n;
    char k = 65;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <2 * n; j++)
        {
            if (j <n+2- i || j > n + i-2)
                printf("%c ", k);
            else
                printf("  ");
            j < n ? k++ : k--;
        }
        k = 65;
        printf("\n");
    }
    return 0;
}