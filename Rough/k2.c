#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for (i=1;i<=(2*n-1);i+=2)
    printf("%d*",i);
}