//WAP to check whether the number is even or odd using ternary operator.
#include <stdio.h>
int main() 
{
int n;
printf("Enter the number: ");
scanf("%d",&n);
(n%2==0)?
printf("Entered number %d is Even number",n):
printf("Entered number %d is odd number",n);
return 0;
}