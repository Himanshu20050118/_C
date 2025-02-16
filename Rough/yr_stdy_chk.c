//WAP to print current year of study of btech using switch case.
#include<stdio.h>
#include<conio.h>
void main()
{
int x;
printf("Enter your current year of study: ");
scanf("%d",&x);
switch(x)
{case 1:
printf("Complete your 1st year of study\n");
break;
case 2:
printf("Complete your 2nd year of study\n");
break;
case 3:
printf("Complete your 3rd year of study\n");
break;
case 4:
printf("Complete your 4th year of study\n");
break;
default:
printf("Invalid input");
}
getch();
}