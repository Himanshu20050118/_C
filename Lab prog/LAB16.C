//WAP to display fibonacci series upto n  number of terms using for loop and also find sum of the series.
#include<stdio.h> 
int main()
{
int  n,i,t1=0,t2=1,t3;
printf("Enter the number of terms: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    if(i<n)
    printf("%d+",t1);
    else
    printf("%d",t1);
    t3=t1+t2;
    t1=t2;
    t2=t3;
}
return 0;
}
