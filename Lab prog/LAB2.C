//WAP to find the value of 2^n and 1/2^n using bitwise operator.
#include<stdio.h>
int main()
{
int n,y;
double g;
printf("Enter power of 2^n : ");
scanf("%d",&n);
printf("Enter power of 1/2^n : ");
scanf("%d",&n);
//left shift operator
y=1<<n;
printf("The value of 2 raise to the power(2^%d) is %d",n,y);
//Right shift operator
g=1.0/(1<<n);
printf("\nThe value of 1/2 raise to the power(1/2^%d) is %lf",n,g);
return 0;
}