/*
      *
     *** 
    *****
    
*/
#include<stdio.h>
int main()
{ int r;
    printf("Enter no. of rows: ");
    scanf("%d",&r);
   for(int i=1;i<=r;i++)
   {
       for(int j=1;j<=r-i;j++)
        printf("  ");
       for(int k=1;k<2*i;k++)
        printf("* ");
        printf("\n");
   }
   return 0;
}