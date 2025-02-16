//WAP to display the series from 1 to 100 and find the sum and average.
#include<stdio.h>
#include<conio.h>
int main()
{
 int i,sum=0;
 float avg;
  printf("welcome user\n");
 printf("The series from 1 to 100 is :\n");
 for(i=1;i<=100;i++)
 {
 i=i;
 printf("%d,",i);
 sum+=i;
 avg= (float)(sum)/100;
 }
 printf("\nThe sum from 1 to 100 is %d",sum);
 printf("\nThe average from 1 to 100 is %.2f",avg);
 printf("\nThankyou!!");
 getch();
 return 0;
}
