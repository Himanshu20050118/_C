//WAP to find smallest of 3 number using ternary operator.
#include <stdio.h>

int main(){
    int a,b,c,min;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    min=a<b&&a<c?a:b<a&&b<c?b:c<a&&c<b?c:a<b&&a<c?a:b;
//    min=a<b&&a<c?a:b<a&&b<c?b:c<a&&c<b?c:0;
    printf("Small is: %d",min);
    return 0;
}