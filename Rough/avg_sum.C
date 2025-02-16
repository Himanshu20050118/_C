
//write a program to input a integar from the user 1 to 100 and display their sum and average
//write a program to reverse a number
//write a program to find hcf of two numbers
//write a progam in c to print sum of first and last digit of a number given by user
#include<stdio.h>
int main()
{
int sum=0,i;
for(i=1;i<=100;i++)
 { sum+=i;
 }
 printf("The sum from 1 to 100 is %d\n",sum);
 printf("The average from 1 to 100 is %d\n",sum/100);
 return 0;
 }