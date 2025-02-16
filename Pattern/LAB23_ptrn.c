/*Wap like this if number of row enterd by user is 9.
     4
    4 3
   4 3 2
  4 3 2 1
 4 3 2 1 0
  4 3 2 1
   4 3 2
    4 3
     4
*/
// #include<stdio.h>
// int main(){
//     int i, j ,k, n,m, g;
//     // printf("Enter number of col.(odd only): ");
//     // scanf("%d", &n);//9
//     n=9;
//     m=n/2;//4
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m-i|| j<m-i-4; j++) {
//             printf(" ");
//         }
//         for (int k = m; k >= m-i; k--) {
//             printf("%d ", k);
//         }
//         printf("\n");
//     }
//     return 0;
// }



#include<stdio.h>
int main(){
    int i, j ,k, l,x,y,rows;
    printf("Enter number of rows(odd only): ");
    scanf("%d", &rows);//9
    // n=9;
    l=rows/2;
    x=l+1;
    y=x;

    for (int i = 0; i <= rows; i++) {
        for (int j = 0; j < x-i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++, l--) {
            printf("%d ", l);
            if (l==i-y)
            {
                break;
            }
            
        }
        if (i>=y)
        {
            x+=2;
        }
        l=rows/2;
        
        printf("\n");
    }
    return 0;
}













        // if (i>m){
        //     i=g;
        //     g-=m;
        // }
        // else
        // i=g;
























































































// #include <stdio.h>
// int main()
// {
//     int i, j, k, n, m, x, y;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     m=n/2,x=m+1,y=x;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <=x; j++)
//             printf("  ");
//         for (k =1; k<=i; k++,m--)
//             printf("%d", m);
//         printf("\n");
//     }
//     return 0;
// }