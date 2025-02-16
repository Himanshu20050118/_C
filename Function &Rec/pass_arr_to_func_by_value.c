#include<stdio.h>
#include<conio.h>
void fun(int num)
{
printf("\nElement : %d",num);
}
void main() {
int arr[5],i;
printf("\nEnter the array elements : ");
for(i=0;i< 5;i++)
scanf("%d",&arr[i]);
printf("\nPassing array element by element.....");
for(i=0;i< 5;i++)
fun(arr[i]);
}