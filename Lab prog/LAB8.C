 //WAP to chek whether the number is positive,negative or zero using conditional statements
 #include<stdio.h>
 int main()
 {
 int a;
 printf("\nEnter the value of a: ");
 scanf("%d",&a);
 if(a>0)
 printf("a is a positive number: %d",a);
 else if(a<0)
 printf("a is a negative  number: %d",a);
 else
 printf("a is a zero number: %d",a);
 return 0;
 }