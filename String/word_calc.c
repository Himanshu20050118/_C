//To  count number of words in string.
#include<stdio.h>
#include<string.h>
int main(){
  int i,count=1;
  char str[50];
  printf("Enter a string:");
  fgets(str,50,stdin);
  str[strcspn(str,"\n")]='\0';
  printf("len=%d",strlen(str));
//   for(i=0;i<strlen(str);i++)
  for(i=0;i<str[i]!='\0';i++)
  { if(str[i]==' '||str[i]==','||str[i]=='.'||str[i]=='?'||str[i]==';'||str[i]==':'||str[i]=='!')
     count++;
    if(str[i]==','&&str[i+1]==' '||str[i]=='.'&&str[i+1]==' ')
      count--;
  }
  printf("\nThe count of words is %d",count);
  return 0;
}