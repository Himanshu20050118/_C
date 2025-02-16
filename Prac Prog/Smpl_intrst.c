#include<stdio.h>

int main()
{
    float p,r,t,s;
    printf("Enter the value of p:\n"),
    scanf("%f",&p);
 printf("Enter the value of r:\n"),
    scanf("%f",&r);
 printf("Enter the value of t:\n"),
    scanf("%f",&t);
s=p*r*t/100;
printf("Simple interest is \n%f",s);
    return 0;
}