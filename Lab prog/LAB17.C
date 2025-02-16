

//WAP to check whether the given number is prime number or not using a while loop.
#include<stdio.h>
int main()
{
int n,x;
printf("Enter the number: ");
scanf("%d",&n);
x=2;
if(n<2)
printf("Number is not prime");
else
{ while(x<=n/2)
{
	if(n%x==0)
	{
     printf("\n%d is not a prime number",n);
     break;
    }
    else
    x++;
}
if(x==n/2+1)
	printf("%d is Prime number",n);
  }
  return 0;
}
