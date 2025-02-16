// C income tax(if else)
#include<stdio.h>
int main(){
    int income;
    float tax;
    printf("Enter income: ");
    scanf("%d",&income);
    if(income<=250000){
        tax=0*income;
        printf("Your income tax is %frs",tax);
    }
    else if(income>250000&&income<=500000){
        tax=0.05*(income-250000);
        printf("Your income tax is %frs",tax);
    }
    else if(income>500000&&income<=10000){
        tax=0.2*(income-500000)+0.05*250000;
        printf("your income tax is %frs",tax);
    }
    else{
    tax=0.3*(income-100000)+0.2*500000+0.05*250000;
    printf("your income tax is %frs",tax);
    }
    return 0;
}