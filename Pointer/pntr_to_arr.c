#include<stdio.h>
int main(){
    int *p;
    int (*ptr)[5];
    int x[5] = {2,4,5,6,7};
    int a[5] = {12,3,4,90,122};

    p=a;
    ptr=&x;

    printf("p=%u    ptr=%u\n", p, ptr);
    printf("value at p=%u, *ptr=%u **ptr=%d\n", *p, *ptr, **ptr);

    p++;
    ptr++;
    printf("p=%u, ptr = %u\n", p, ptr);
    printf("value at p=%u, value at ptr=%u\n", *p, **ptr);
    
    return 0;
}