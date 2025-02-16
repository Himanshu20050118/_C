#include<stdio.h>
int main(){
    int a=335, k=77;
    float b=41.78;
    char ch = 'A';
    int *p1;
    p1=&a;
    void *p2, *p3;
    p2=&b;
    p3=&ch;

    printf("p1: value at %u is %d \n", p1, *p1);
    printf("p2: value at %u is %.2f....%u \n", p2, *((float*)p2), &p2);
    printf("p3: value at %u is %c \n", p3, *((char*)p3));

    p2=&a;
    printf("p2: value at %u is %d...%u \n", p2, *((int*)p2), &p2);




    return 0;
}