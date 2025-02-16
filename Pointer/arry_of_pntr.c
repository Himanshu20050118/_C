
//datatype *pointer_name[size].......

#include<stdio.h>
int main(){
    int x[5]={2,4,6,8,10};
    float y=28.5,z=35.6,w=67.8;
    int *p1[5];
    float *p2[3];
    p2[0]=&y;
    p2[1]=&z;
    p2[2]=&w;
    for(int i=0;i<5;i++)
    {   
        p1[i]=&x[i];
        printf("p1[%d]=%u...*p1[%d]=%u",i,p1[i],i,*p1[i]);
        printf("\n");

    }
    printf("...............................\n");
    
    for(int j=0;j<3;j++)
    {
        printf("p2[%d]=%u...*p2[%d]=%.2f",j,p2[j],j,*p2[j]);
        printf("\n");
    }
    return 0;
}