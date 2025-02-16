#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char *a;
    int i;
    a=(char *)malloc(100*sizeof(char));
    printf("Enter hello:");
    scanf("%s",a);
    //printf("%d\n",strlen(a));
    for(i=0;i<strlen(a);i++)
      printf("%c",a[i]);
    free(a);
    return 0;
}