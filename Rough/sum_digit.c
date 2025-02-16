#include<stdio.h>
int main(){
    int num,digit,sum=0,c=0;
    printf("Enter number ");
    scanf("%d",&num);
    while(num!=0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
        c++;
    }
    printf("The sum of digits of a number is %d",sum);
    printf("\nThe number of digits are: %d ",c);
    
}