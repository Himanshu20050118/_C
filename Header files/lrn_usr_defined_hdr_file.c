#include<stdio.h>
#include "myfile.h"
// #include <myfile.h> ..... cannot run with this type beacuse it is user defined header file.
int main(){
    int n;
    printf("Enter the number whose digits to be counted: ");
    scanf("%d", &n);
    printf("The number of digits in the number are: %d",digit_count(n));
    return 0;
}