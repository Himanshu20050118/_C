#include<stdio.h>
#include<string.h>
int main(){
	FILE *fp;
	char *x;
	int i;
	fp=fopen("C:\\Users\\Nitin\\Desktop\\c+\\file1.txt","a");
	if(fp==NULL) 
	 printf("error");
	printf("Enter words that you want to append:");
	gets(x);	
	for(i=0;i<strlen(x);i++)
	 { fputc(x[i],fp);
	  printf("%c",x[i]);}
	fclose(fp);
	return 0;
}