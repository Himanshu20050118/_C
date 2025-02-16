#include <stdio.h>
int sum_N(int);
int sum_N(int n){
    if(n<=1)
    return 1;
    else
    return sum_N(n-1)+n;
}
int main()
{
    int n;
    printf("Enter the number upto which sum is to be calculated: ");
    scanf("%d",&n);
    printf("Sum of first %d Natural number is: %d",n,sum_N(n));
    return 0;
}