#include <stdio.h>
int main()
{
    char ch;
    FILE *fp;
    fp = fopen("file1.txt", "r");
    if (fp == NULL)
    {
        printf("File can not be opened.");
        return 0;
    }
    printf("Charecters read: \n");
    for (int i = 1; i <= 10; i++)
    {
        ch = fgetc(fp);
        // fscanf(fp,"%c",&ch);

        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}