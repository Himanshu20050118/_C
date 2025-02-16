//WAP to find the sum of digits of a number.
#include<stdio.h>
#include<conio.h>
int main()
{
 clrscr();
 int num,digit,sum=0;
 printf("Enter number: ");
 scanf("%d",&num);
 while(num!=0)
{
 digit=num%10;
 sum+=digit;
 num=num/10;
}
 printf("The sum of digits of a number is %d",sum);
 getch();
}