#include<stdio.h>

int main(){
    float x=50.2;
    float *p1, **p2, ***p3, ****p4;
    p1=&x;
    p2=&p1;
    p3=&p2;
    p4=&p3;
    printf("Value at %u is %.2f\n", p1, *p1);
    printf("Value at %u is %u\n", p2, *p2);
    printf("Value at %u is %u\n", p3, *p3);
    printf("Value at %u is %u\n", p4, *p4);
    printf("Value at **p2 is %.2f\n",**p2);
    printf("Value at ***p3 is %.2f\n",***p3);
    printf("Value at **p4 is %f\n",*&p4);
    printf("Value at ****p4 is %.2f\n",****p4);
    return 0;
}