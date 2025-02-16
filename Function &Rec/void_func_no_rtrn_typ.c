// void function with no return type and no argument.
#include<stdio.h>
void line();
void line(){
    for(int i=1;i<=100;i++)
    printf(".");
}
int main(){
    line();
    printf("\nSem: 1\n");
    line();
    printf("\nSection: 2\n");
    line();
    printf("\nBranch: Cse 2\n");
    line();
    printf("\nCollege: DCE\n");
    line();
    return 0;
}
