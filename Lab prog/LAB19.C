/*WAP to store the reverse of an input number in another varibale ,display it and check whether this input number
 is palindrome or not.*/
#include<stdio.h>
int main()
{
    int n,rev=0,r,a;
    printf("Enter number: ");
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {  r=a%10;
       rev=rev*10+r;
       a=a/10;
    }
    if(rev==n)
    printf("%d is a palindrome number\n",n);
    else
    printf("%d is not a palindrome number",n);
    return 0;
}