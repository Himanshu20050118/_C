#include<stdio.h>
void fun(int arr[ ])
{
int i;
for(i=0;i< 5;i++)
arr[i] = arr[i] + 10;

}
int main( )
{
int arr[5],i;
printf("\nEnter the array elements : ");
for(i=0;i< 5;i++)
scanf("%d",&arr[i]);
printf("\nPassing entire array .....");
fun(arr); // Pass only name of array
for(i=0;i< 5;i++)
printf("\nAfter Function call a[%d] : %d",i,arr[i]);
return 0;
}