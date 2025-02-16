// wap to check whether the element in a array is even or odd.
#include<stdio.h>
int main()
{
  int i,n,a[n];
  printf("Enter the number of terms of array: ");
  scanf("%d",&n);
  printf("Enter the values: ");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
    if(a[i]%2==0)
    printf("\n%d is an even number at index %d ",a[i],i);
    else
     printf("\n%d is a odd number at index %d ",a[i],i);
  }
  return 0;
}