#include <stdio.h>
#include <stdlib.h>
int fact (int n);
int fact(int n)
{
    if(n==0||n==1)
    return 1;
    else if (n<0)
    return -1;
    else
   return n*fact(n-1);
}
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("The factorial of a: %d is %d",a,fact(a));
    return 0;
}