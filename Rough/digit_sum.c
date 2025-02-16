//WAP to find sum of first and last digit of a number input by the user.
#include<stdio.h>
#include<conio.h>
int main()
{
int n,a,b;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
a=n;
while(a>=10);
{
a=a/10;
}
printf("The  first digit of the number is %d",a);
printf("The last digit of the number is %d\n",n%10);
printf("The sum of first and digit of the number is %d\n",a+(n%10));
getch();
return 0;
}