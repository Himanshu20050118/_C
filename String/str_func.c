#include<stdio.h>
#include<string.h>
int main(){
char x[100],y[100],s1,s2,s3;
puts("Enter the string x: ");
fgets(x,100,stdin);
x[strcspn(x,"\n")]='\0';
puts(x);
printf("Enter the string y: ");
fgets(y,100,stdin);
y[strcspn(y,"\n")]='\0';
puts(y);
strrev(x);
puts("The string x is reversed");
puts(x);
strrev(y);
puts("The string y is reversed");
puts(y);
puts(s1);
puts(s2);
strcpy(s2,s1);
puts(s2);
// s1=strncpy(y,x,10);
// puts(s1);
// s2=strncat(x,y,10);
// puts(s2);
// if(strcmp(x,y)==0||strcmpi(x,y)==0)
// puts("String is comparable" );
// else
// puts("String is not  comparable" );
    
    return 0;
}