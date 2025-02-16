/*WAP to calculate julian day and display julian day of input date for the
 current year if user enters day,month and year value for the date.*/
#include<stdio.h>
int main()
{
int d,m,y,j;
printf("Enter day,month and year value: ");
scanf("%d %d %d",&d,&m,&y);
if(m<1||m>12||d<1||d>31||y<1)
printf("Invalid date");
j=d;
switch(m-1)
{
case 11:j+=30;
case 10:j+=31;
case 9:j+=30;
case 8:j+=31;
case 7:j+=31;
case 6:j+=30;
case 5:j+=31;
case 4:j+=30;
case 3:j+=31;
case 2:
if(y%4==0||(y%100!=0&&y%400==0))
j+=29;
else
j+=28;
case 1:j+=31;
printf("Julian day value is: %d",j);
}
}


