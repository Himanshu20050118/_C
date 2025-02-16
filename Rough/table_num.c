// C table of 2(for loop)
#include<stdio.h>
int main()
{
    int table;
    printf("table of 2\n");
    for(int i=1;i<=10;i++)
    {
        table=2*i;
        printf("2*%d=%d\n",i,table);
    }
    return 0;
}