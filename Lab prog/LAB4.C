//WAP to swap two numbers using third variable.
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the value of a before swapping : ");
scanf("%d",&a);
printf("Enter the value of b before swapping : ");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("The value of a after swapping : %d",a);
printf("\nThe value of b after swapping : %d",b);
return 0;
}
