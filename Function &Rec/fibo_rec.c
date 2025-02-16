#include <stdio.h>
int fibonacci(int);
int fibonacci(int n){
    if(n==1||n==2)
   return n-1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("fibonacci series upto n:%d terms is ",n);
    for(int i=1;i<=n;i++)
    {printf("%d ",fibonacci(i));}
    return 0;
}