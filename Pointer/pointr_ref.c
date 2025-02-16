#include<stdio.h>
int main(){
    float x=50.8;
    float *p,*p1,*p2;
    p=&x;
    p1=p+2;
    p2=p1-3;
    printf("\n %u.... %0.2f....%u....",p,*p, &p);
    printf("\n %u... %u...%u....%u",p1,p2, &p1, &p2);
    return 0;
}