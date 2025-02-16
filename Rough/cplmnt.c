//Write a program to find the complement of a number.
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 int x;
 unsigned y;
 printf("Enter the value of x :");
 scanf("%d",&x);
 printf("Enter the value of y :");
 scanf("%u",&y);
//printf("\nThe value of x is %d",x);
//printf("\nThe value of y is %d",y);
 printf("\nThe complement of %d is %d",x,~x);
 printf("\nThe complement of %u is %u",y,~y);
 getch();
 return 0;
 }

