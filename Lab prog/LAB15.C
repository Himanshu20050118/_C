//WAP to display the series and find the sum of the series 1+2+4+7+11+.......upto n terms using for loop.
#include<stdio.h>
int main()
{
int n,i,term=1,sum=0;
printf("Enter the number of terms: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    term+=i;
    printf("%d+",term);
    sum+=term;
}
printf("\nThe sum of the series is %d",sum);
return 0;
}
