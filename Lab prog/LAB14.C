//WAP to display the factorial of a number using for loop.
#include<stdio.h>
int main()
{
int n,i;
unsigned long int f;
printf("Enter the number: ");
scanf("%d",&n);
if(n==0||n==1)
printf("Factorial of %d is: 1",n);
else
f=1;
for(i=n;i>1;i--)
f=f*i; 
printf("The factorial of %d is: %lu",n,f);
return 0;
}