#include<stdio.h>
int* rev(int a[10],int b[10]);
int main(){
    int arr[10],i,j,*s;
    printf("Enter 10 elements of array:");
    for(i=0;i<10;i++)
     scanf("%d",arr+i);
    rev(arr,s);
    printf("After reversing:");
    for(i=0;i<10;i++)
     printf("%d ",s[i]);
    return 0;
}
int* rev(int a[10],int b[10]){
    int i=9,j=0;
    while(i>=0)
    { b[j]=a[i];
      i--;
      j++;
    }
    return b;
}