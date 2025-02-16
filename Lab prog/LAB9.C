//WAP to check whether the input year value (unsigned)  is a leap year or not.
#include<stdio.h>
int main()
{
unsigned int n;
printf("Enter the value of the year: ");
scanf("%d",&n);
if(n%4==0&&(n%400==0||n%100!=0))
printf("The year %d is a leap year",n);
else
printf("The year %d is not a leap year",n);
return 0;
}
