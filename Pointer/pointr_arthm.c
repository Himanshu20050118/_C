
//Declaration of pointer variable is-....
//<datatype> *pointer_name......
//p++,p-- can be done not p* or P/.......
// '*' is deference operator......          
#include<stdio.h>
int main(){
 float *p,*p1,*p2;
    float x=50.8;
    p=&x;
    p1=p+2;
    p2=p1-3;  
printf("The value at %u is %.1f",p,*p);
printf("\nThe value at p1=%u",p1);
printf("\nThe value at p2=%u",p2);
return 0;
}