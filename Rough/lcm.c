#include<stdio.h>
int main(){
    int num1,num2,max;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    if(num1<1||num2<1)
    {
        printf("invalid input");
        return 0;
    }
    max=num1>num2?num1:num2;
    while(1)
    {if(max%num1==0&&max%num2==0)
       {printf("lcm of %d and %d is %d",num1,num2,max);
        break;
        }
    max++;
    }
    return 0;
}