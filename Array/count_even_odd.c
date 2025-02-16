#include<stdio.h>
int main(){
    int i,n,x=0,y=0;
    printf("Enter no. of terms:");
    scanf("%d",&n);
    int a[n];
    printf("Enter values:");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {if(a[i]%2==0)
      x++;
     else
      y++;}
    printf("The count of even number is %d\n",x);
    printf("The count of odd number is %d\n",y);
    return 0;
}