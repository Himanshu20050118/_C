//power functon can be used with int and double
//find power of num
#include <stdio.h>
#include<math.h>
int main() {
    float a,r,c;
    printf("Enter the value of number whose power is to be calculated: ");
    scanf("%f", &r);
    printf("Enter the value of power to be calculated: ");
    scanf("%f", &c);
    a=pow(r,c);
    printf("%.2f",a);

    return 0;
}