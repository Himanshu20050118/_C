#include<stdio.h>
#include<string.h>
void main()
{
char x[20],y[20];
printf("Enter the string: ");
gets(x);
// scanf("%s",&x);
strcpy(y,x);
puts("string is");
puts(y);
strrev(y);
if(strcmpi(x,y)==0)
puts("This string is a Palindrome");
else
puts("This string is not a Palindrome");
printf("%d",strlen(y));
printf("\n%s",strcat(y,x));
printf("\n%s",strcat(x,y));

}