/*WAP to check whether a point lies inside,outside,at centre or on the circle of radius,X and Y coordinates input by the user.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int r,x,y,dis;
 printf("Enter radius of circle: ");
 scanf("%d",&r);
 printf("Enter value of x: ");
 scanf("%d",&x);
 printf("Enter value of y: ");
 scanf("%d",&y);                                    //Withoutmath.h
 dis=sqrt(x*x+y*y);
 if(dis==0)                                        //(x==0&&y==0)
 printf("Point lies at the centre of the circle");
 else if(dis==r)                                   //(pow(x*x+y*y,0.5)==r)
 printf("Point lies on the circle");
 else if(dis<r)                                    //(x<r&&y<r&&x>-r&&y>-r)
 printf("Point lies inside the circle");
 else
 printf("Point lies outside the circle");
 getch();
}