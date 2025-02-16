// WAP to find greatest of three numbers using conditional operator.
#include<stdio.h>
int main()
{
 int num1,num2,num3,min;
 printf("Enter value of three numbers :");
 scanf("%d %d %d",&num1,&num2,&num3);
 min=num1;
 if(num2<min)
 min=num2;
 if(num3<min)
 min=num3;
 printf("\nThe smallest value is %d",min);
 return 0;
}
