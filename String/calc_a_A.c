#include<stdio.h>
#include<string.h>
int main(){
    char *s;
    int i,c=0;
    printf("Enter the string: ");
    gets(s);
for (i  = 0;  i<strlen(s) ; i++) {
    if(s[i]=='a'||s[i]=='A')
    c++;
}
   printf("Number of A\'s and A\'s are %d",c) ;
    return 0;
}