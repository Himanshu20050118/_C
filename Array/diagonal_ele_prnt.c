//Wap to print diagonal elements of matrix.
#include<stdio.h>
int main(){
   int a[10][10],r,c,i,j;
   printf("Enter number of rows of square matrix:");
   scanf("%d",&r);
   printf("Enter elements of matrix %d×%d:\n",r,r);
   c=r;
   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
     scanf("%d",&a[i][j]);
    }
   }
   printf("Diagonal matrix is:\n");
   for(i=0;i<r;i++){
    for(j=0;j<c-i;j++){
          {printf("%d ",a[i][j]);}
    }
    printf("\n");
   }
   return 0;
}