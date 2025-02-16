#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    int charcount=0,wordcount=0;
    printf("OUTPUT:\n");
    printf("Enter file name to count characters and words:");
    scanf("%s",fp);
    fp=fopen("filename", "r");
    if(fp==NULL){
        printf("Error opening file %s\n",fp);
        return;
    }
    while((ch=fgetc(fp))!=EOF){
        charcount++;
        if(ch==' '||ch=='\t'||ch=='\n'||ch==','||ch=='?'||ch=='.')
                wordcount++;}
    printf("Total characters:%d\n",charcount);
    printf("Total words:%d\n",wordcount);
   fclose(fp);
   return 0;
}

