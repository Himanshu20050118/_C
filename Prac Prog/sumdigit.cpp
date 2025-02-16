#include <stdio.h>
int main(){
int num,digit,sum=0;
printf("Enter the numbers \n");
scanf("%d",&num);
while(num!=0){
digit=num%10;
sum=sum+digit;
num=num/10;}
printf("the sum of digits is %d",sum);
return 0;
}

