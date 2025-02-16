#include<stdio.h>
int power(int n,unsigned int pow){
      if(pow==0)
       return 1;
     return n*power(n,pow-1);
}
int main(){
    int a,x;
    do{printf("Enter number and power:");
       scanf("%d %d",&a,&x);
    }while(x<0);
    printf("%d^%d =%d",a,x,power(a,x));
    return 0;
}