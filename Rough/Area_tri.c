#include<stdio.h>
/*WAP to display first character of your name using backslah constants in printf() function.*/
/*Draw a flowchart to compare 3 integers and display the smallest one.*/
/*WAP to display the area of a triangle if base and heightvalues are input by the user*/
int main()
{
    float b,h,A;
  printf("Enter the value of base is :\n");
  scanf("%f",&b);
  printf("Enter the value of height is :\n");
  scanf("%f",&h); 
  A=(1.0/2.0)*b*h;
  printf("The area of triangle is :\n%f",A);

  return 0;
}