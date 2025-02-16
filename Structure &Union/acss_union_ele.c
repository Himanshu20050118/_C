#include<stdio.h>
union abc{
    float a;
    int b;
    char c;
};
int main(){
    union abc x;
    x.a=3.5;
    x.b=13;
    x.c=50;
    printf("%f\n",x.a);
    printf("%d\n",x.b);
    printf("%c\n",x.c);
    return 0;
}