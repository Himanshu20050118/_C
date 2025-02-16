#include<stdio.h>
int main(){
    int A[5]={-4,0,3,8,27},B[5]={-5,2,6,8,28},C[10],x;
    for(int i=0;i<10;i++)
    {
      if(i<5)
      C[i]=A[i];
      else
      C[i]=B[i-5];
    }
    for(int i=1;i<10;i++)
    {
        for(int j=0;j<10-i;j++)
         {if(C[j]>C[j+1])
          { x=C[j];
            C[j]=C[j+1];
            C[j+1]=x;}
         }
    }
    printf("Compined array series in ascending order is:");
    for(int i=0;i<10;i++)
     printf("%d ",C[i]);
    return 0;
}