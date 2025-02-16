/*WAP to find sum of square of a natural number and display series upto n terms.*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int square,n,sum=0;
 printf("Enter value to calculate squares upto: ");
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
{
 square=i*i;
 sum+=square;
 if(i==n)
  printf("%d",square);
 else
 printf("%d+",square);
 }
 printf("\nThe sum is %d",sum);
 getch();
 return 0;
}
