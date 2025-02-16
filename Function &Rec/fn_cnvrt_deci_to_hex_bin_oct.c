#include<stdio.h>
void binary(int num){
    int i,q=num,rem,bin=0,c=1,oct=0,hex=0;
    while(q!=0)
    { rem=q%2;
      q/=2;
      bin+=rem*c;
      c*=10;
    }
    /*c=1;   //for octadecimal
     q=num;
    while(q!=0)
     { rem=q%8;
       q/=8;
       oct+=rem*c;
       c*=10;
     }*/
    printf("binary equivalent of %d is %d\n",num,bin);
    printf("%d in hexadecimal:%x\n",num,num);  
    printf("%d in octadecimal is %o",num,num);  
}
void main(){
   int n;
   printf("Enter number:");
   scanf("%d",&n);
   binary(n);
}