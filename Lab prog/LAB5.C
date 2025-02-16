//WAP to input the radius from the user and find the area and circumference of the circle. 
#include<stdio.h>
int main()
{
float r,a,c;
printf("Enter the value of radius of circle: ");
scanf("%f",&r);
a=3.14*r*r;
c=2*3.14*r;
printf("\nThe Area of circle is %f",a);
printf("\nThe Circumference of Circle is %f ",c);
return 0;
}