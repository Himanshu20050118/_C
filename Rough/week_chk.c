#include<stdio.h>
int main(){
    int y;
    printf("Enter number: ");
    scanf("%d",&y);
    switch(y)
    {
        case 1:
        printf("Monday\n");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("\nWednesday\n");
        break;
        case 4:
        printf("Thursday\n");
        break;
        case 5:
        printf("Friday\n");
        break;
        case 6:
        printf("Saturday\n");
        break;
        case 7:
        printf("Sunday\n");
        break;
        default: 
        printf("Invalid input");
    }
    return 0;
}