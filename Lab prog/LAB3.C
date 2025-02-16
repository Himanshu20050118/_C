//WAP to swap the number  with out using third variable.
#include<stdio.h>
int main()
{
int a,b;
printf("Enter the value of a before swapping : ");
scanf("%d",&a);
printf("Enter the value of b before swapping : ");
scanf("%d",&b);
/*
a=a+b;
b=a-b;
a=a-b;
*/
a=a^b;
b=a^b;
a=a^b;
/*
a=a*b;
b=a/b;
a=a/b;
*/
printf("The value of a after swapping : %d",a);
printf("\nThe value of b after swapping : %d",b);
return 0;
}
