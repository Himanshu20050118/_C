#include<stdio.h>
int main(){
    int a,b,small,x,y;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    x=a;
    y=b;
    
    if(a<=0||b<=0)
     {printf("\"Invalid input\"");
      return 0;
     }


    if(b>a&&a>0&&b>0)
     { a=a+b;
      b=a-b;
      a=a-b;
     }


    while(b!=0)
       { small=b;
        b=a%b;
        a=small;}
       printf("The hcf of %d and %d is %d",x,y,a);
   return 0;
}