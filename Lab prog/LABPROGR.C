#include<stdio.h>
#include<conio.h>
//wreite a program to check whether a number is equal or unequal.
//write a program to make a calculator using switch case.
//write a program to grouping the people in the child young and old category depending on the age group whether use (if else or switch case).
//write a program whether the character is upper case lower case and special character.
//
int main(){
float a,b ;
printf("Enter the value of a:\t");
scanf("%f",&a);
printf("Enter the value of b:\t");
scanf("%f",&b);
if(a==b){
printf("The typed numbers a=%f and b=%f are equal",a,b);
}
else {
printf("The typed numbers a=%f and b=%f are not equal",a,b);}
getch();
return 0;
}