#include<stdio.h>
int main(){
    int x=50;
    int *ptr;
    ptr=&x;
    printf("The value at %u is %u",ptr,*ptr);
    *ptr=180;
    printf("\nThe value at %u is %u",ptr,*ptr);
    *ptr=220;
    printf("\nThe value at %u is %u",ptr,*ptr);
   return 0;
}