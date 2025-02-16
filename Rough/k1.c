#include<stdio.h>

int main()
{
    int x=10, y=20,z,p;
    z=++x+y++-x--;
    p=++z+y--;
    printf("%d %d %d %d",x,y,z,p);
    return 0;
}