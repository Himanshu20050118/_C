#include<stdio.h>
int main(){
    int marks[5],total=0;
    float avg,per;
    for(int i=0;i<5;i++)
    {
        printf("Enter marks: ");
        scanf("%d",&marks[i]);
        total+=marks[i];
    }
    printf("The total marks are %d\n",total);
    avg=(float)total/5;
    printf("The average marks is %f\n",avg);
    per=((float)total/375)*100;
    printf("The perctange of marks is %f\n",per);
    return 0;
}