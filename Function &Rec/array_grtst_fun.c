#include<stdio.h>
int greatest(int arr[10]){
    int a=arr[0],i;
    for(i=0;i<10;i++)
    if(arr[i]>a)
     a=arr[i];
    return a;
}
int main(){
    int arr[10],i;
    printf("Enter array:");
    for(i=0;i<10;i++)
      scanf("%d",&arr[i]);
    printf("The greatest of 10 is %d.",greatest(arr));
    return 0;
}