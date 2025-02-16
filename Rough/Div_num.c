// WAP to check the number is divisible or not.
#include<stdio.h>
#include<stdlib.h>
int main(){
int a,b;
printf("enter a\n");
scanf("%d", &a);
printf("enter b\n");
scanf("%d", &b);
if(b ==0){
printf("error:division by zero is not allowed.\n");
return 1;
}
printf("the value of reminder is %d\n", a%b);
return 0;
}