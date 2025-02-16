 //Wap to check armstrong number.
 //Wap to print star pattern.
 //wap to whether a number is pelindrome or not.
 //wap to print factorial of a number.
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 int i,j,n;
 printf("Enter the number of lines: ");
 scanf("%d",&n);
 for(i=1;i<n;i++)
{
 for(j=1;j<i;j++)
 printf("*",j);
 printf("\n");
 }
 getch();
 return 0;
 }