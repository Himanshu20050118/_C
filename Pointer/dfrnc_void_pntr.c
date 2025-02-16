
// *(type*)voidpointer name..
#include<stdio.h>
int main()
{
    int a=335;
    float b=41.78;
    char ch='A';
    int *p=&a,*p3;
    void *p1,*p2;
    p1=&b;
    p2=&ch;
    printf("Value at %u is %u",p,*p);
    printf("\nValue at %u is %.2f",p1,*(float*)p1);
    printf("\nValue at %u is %c",p2,*(char*)p2);
    // printf("\nValue at %d is %u",p3,*p3);
return 0;
}
