#include<stdio.h>
#include<string.h>

//char *str is a single pointer used at address of arr[1], and its vale goes on increasing . *str gives the value at address.

int count(char *str,char n){
    int x=0,i=0;
    while(*str!='\0'){
      printf("%c",*str);
        if(*str==n)
          x++;
        str++;
    }
    return x;
}
int main(){
   char *arr,n;
   int c;
   printf("Enter string:");
   fgets(arr,100,stdin);
   printf("Enter character to count:");
   scanf(" %c",&n);
   c=count(arr,n);
   printf("The count of %c is %d",n,c);
   return 0;
}