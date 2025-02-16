// C passed or failed marks
#include<stdio.h>
int main(){
    int marks1,marks2,marks3;
    printf("Enter marks1:  ");
    scanf("%d",&marks1);
    printf("Enter marks2: ");
    scanf("%d",&marks2);
    printf("Enter marks3: ");
    scanf("%d",&marks3);
    if(marks1<33||marks2<33||marks3<33){
        printf("You are failed in an individual subject\n");
    }
    else if((marks1+marks2+marks3)/3<40)
    {
        printf("Your total marks is less than 40 percent\n");
    }
    else{
        printf("You have passed in all subjects");
    }
     return 0;
}