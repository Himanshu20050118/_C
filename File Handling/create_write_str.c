#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp;
    char * x,*filename;
    int i;
    printf("Enter filename to create:");
    getchar();
    gets(filename);
    fp=fopen(filename,"w");
    printf("enter you want to write:");
    getchar();
    gets(x);
    for(i=0;i<strlen(x);i++)
     {fputc(x[i],fp);
      printf("%c",x[i]);}
    fclose(fp);
    return 0;
}