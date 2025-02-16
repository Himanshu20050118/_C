#include<stdio.h>
void main()
{
char *x,*y;
printf("Enter the string: ");
gets(x);
strcpy(y,x);
puts("string is");
puts(y);
strrev(y);
if(strcmpi(x,y)==0)
puts("This string is a Palindrome");
else
puts("This string is not a Palindrome");
printf("\n%d",strlen(y));
strcat(y,x);
puts(strcat(y,x));
}