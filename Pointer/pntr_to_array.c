
// datatype(*pointer_name)[size]......2
#include<stdio.h>
int main(){
    int x[5]={1,2,3,4,5};
    int *p1,*p3;
    int (*p2)[5];
    p1=x;
    p2=&x;
    p3=&x[2];
    printf("p1=%u ...*p1=%u",p1,*p1);
    printf("\np2=%u ...*p2=%u...**p2=%u....",p2,*p2,**p2);
    printf("\nx[3]=%u",x[3]);
    printf("\n3[x ]=%u",3[x ]);
    printf("\n*(x+3)=%u",*(x+3));
    p1++;
    p2++;
    printf("\np1=%u ...*p1=%u",p1,*p1);
    printf("\np2=%u ...*p2=%u",p2,*p2);
    printf("\np3=%u ...*p3=%u",p3,*p3);
    
    return 0;
}