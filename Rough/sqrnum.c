// Square of n natural numbers
#include<stdio.h>
int main()
{
    int square,n;
    printf("Enter value to calculate squares up to\n");
    scanf("%d",&n);
 printf("Square from 1 to %d\n",n);
    for(int i=1;i<=n;i++)
    {
        square=i*i;
    printf("the square of %d is %d\n",i,square);
    }
    return 0;
}