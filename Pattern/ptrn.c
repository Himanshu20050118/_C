
/*

*******
 *******
  *******
   *******
    *******





*/
#include<stdio.h>
int main()
{ int n=0;
    for(int i=1;i<=6;i++)
    {
     for(int j=1;j<=6;j++)
     {
        if(j<i&&n==0)
         { n++;
             for(int k=1;k<i;k++)
          printf(" ");}
       printf("*");
     }
     n=0;
     printf("\n");
    }
    return 0;
}