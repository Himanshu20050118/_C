//wap to check if the number lies on, in,outside,at centre of the circle.
#include<stdio.h>
#include<math.h>
void main(){
    float r,x,y,dis;
    printf("Enter radius of circle: ");
    scanf("%f",&r);
    printf("Enter value of x ");
    scanf("%f",&x);
    printf("Enter value of y");
    scanf("%f",&y);
   dis=sqrt(x*x+y*y);
    //dis=pow((x*x+y*y),0.5);
   if(dis==0)
   printf("Point lies at the centre of the circle");
   else if(dis<r)
   printf("Point lies inside the circle");
   else if(dis==r)
   printf("Point lies on the circle");
   else
   printf("Point lies outside the circle");
}