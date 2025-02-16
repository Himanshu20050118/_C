//WAP to check whether a number is equal or unequal.
#include<stdio.h>
int main(){
float a,b ;
printf("Enter the value of a:\t");
scanf("%f",&a);
printf("Enter the value of b:\t");
scanf("%f",&b);
if(a==b)
printf("The typed numbers a=%f and b=%f are equal",a,b);
else 
printf("The typed numbers a=%f and b=%f are not equal",a,b);
return 0;
}