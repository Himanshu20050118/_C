#include<stdio.h>
int main(){
    int pin,attempt=3;
    do
    {
        printf("Enter pin: ");
        scanf("%d",&pin);
        attempt--;
        if(pin==8668)
        { printf("Welcome user");
          break;} 
        else
        printf("Invalid input,you have %d attempt to try.\n",attempt);
    }
    while(attempt>0);
    if(attempt==0)
    printf("Access denied.");
    return 0;
}