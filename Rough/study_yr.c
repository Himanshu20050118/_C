#include<stdio.h>
void main()
{
    int y;
    printf("Enter your current year of study: ");
    scanf("%d",&y);
    switch(y)
    {case 1:
    printf("Complete your 1st year of study\n");
    //break;
    case 2:
    printf("complete your 2nd year of study\n");
    //break;
    case 3:
    printf("complete your 3rd year of study\n");
   // break;
    case 4:
    printf("complete your 4th year of study\n");
    break;
    default:
    printf("Invalid input");
    }
}