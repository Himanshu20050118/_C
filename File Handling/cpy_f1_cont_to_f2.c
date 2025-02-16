#include <stdio.h>
int main()
{
    char ch;
    int c = 0;
    FILE *fp1, *fp2;
    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "w+");
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("File can not be opened");
        return 0;
    }
    while (ch = fgetc(fp1) != EOF)
    {
        fputc(ch, fp2);
        c++;
        printf("%c", ch);
    }
    printf("%d characters are copied", c);
    return 0;
}