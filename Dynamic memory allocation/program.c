//wap to create a dynamic array provided size is given by user  add two more elements to this array after taking in the values accordingly to user size first element should be equal to the sum of all previous elements and second element shouls be equal to the average of the all previuos elements in output display all these elements of the dynamic array after being multiplied with the number 5.

#include<stdio.h> 
#include<stdlib.h>
int main(){
   int i,n,sum=0;
   int *A;
   printf("Enter number of elements:");
   scanf("%d",&n);
   A=(int *)malloc(n*sizeof(int));
   printf("Enter %d elements:",n);
   for(i=0;i<n;i++)
     scanf("%d",A+i);
   printf("Entered elements are:");
   for(i=0;i<n;i++)
    { printf("%d ",*(A+i));
      sum+=A[i];}
   A=(int *)realloc(A,(n+2)*sizeof(int));
   A[n]=sum;
   A[n+1]=sum/n;
   printf("\nAfter adding:");
   for(i=0;i<n+2;i++)
     printf("%d ",*(A+i));
   free(A);
   return 0;
}