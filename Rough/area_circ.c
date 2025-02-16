//single line comment
/*multiline
 comments
 one more line*/
#include<stdio.h>
#include<conio.h>
# define PI 22.0/7
#define AREA(R) PI*R*R
float r;//global variable
void main()
{
 //clrscr();
 printf("THIS IS FIRST C PROGRAM \n");
 int radius;//local variable
 r=AREA(7);
 printf("Area of circle with radius 7 is %f",r);
 printf("\n Enter radius of another circle");
 scanf("%d",&radius);
 r=AREA(radius);
 printf("Area of circle with radius %d is %f",radius,r);
 getch();

}

