#include<stdio.h>

int main()
{
    int n,q,r,rev;
    printf("Enter a number: ");
    scanf("%d",&n);
    q=n;
    while (q!=0)
    {
        r=q%10;
        rev=rev*10+r;
        q=q/10;
       }
    if(rev==n)
    printf("Enterned number n %d is  a palindrome",n);
    else
    printf("Enterned number n %d is not a palindrome",n);
    return 0;
}