//WAP to find 1's and 2's complement of a input unsigned number.
#include<stdio.h>
int main()
{
int org_n,n;
printf("Enter the integer: ");
scanf("%d",&org_n);
printf("The 1's complement of a number %d is %d",org_n,~org_n);
//~~n do not gives 2's complement is brings 1's complement to its original value.
n=~org_n;
n=n+1;
printf("\nThe 2's complement of a number %d is %d",org_n,n);
return 0;
}

// unsigned int org_n,n;
// printf("Enter the integer: ");
// scanf("%u",&org_n);
// printf("The 1's complement of a number %u is %u",org_n,~org_n);
// /*~~n do not gives 2's complement is brings 1's complement to its original value*/
// n=~org_n;
// n=n+1;
// printf("\nThe 2's complement of a number %u is %u",org_n,n);