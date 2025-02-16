//WAP to design a calculator for aritmetic operations.
#include<stdio.h>
int main()
{
float n1,n2;
char op;
printf("Enter the numbers: ");
scanf("%f %f",&n1,&n2);
printf("Enter the operation\(+,-,*,/): ");
scanf(" %c",&op);
switch(op)
{
case '+':
printf("Addition of %f and %f is %f",n1,n2,n1+n2);
break;
case '-':
printf("%f subtracted from %f gives %f",n1,n2,n1-n2);
break;
case '*':
printf("Product of %f and %f is %f",n1,n2,n1*n2);
break;
case '/':
if(n2==0)
printf("Division not possible");
else
printf("%f divided by %f gives %f",n1,n2,n1/n2);
break;
default:
printf("Invalid operation");
}
return 0;
}