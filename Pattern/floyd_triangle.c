#include<stdio.h>
int main(){
    int r,c,i,j,k=1;
    printf("Enter the number of rows");
    scanf("%d",&r);
    printf("Enter the number of columns");
    scanf("%d",&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i ;j++)
    
        {printf("%d",k); 
        k++;}
        printf("\n");
        }
return 0;
}























