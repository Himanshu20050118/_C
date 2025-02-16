
// Wap to append 20 odd numbewrs to the file1.txt.
// write"w" mode write an create a file if it is not exist and overwrite the content if it is already there....

#include <stdio.h>
int main()
{
    int n;
    FILE *fp;
    fflush(stdin);
    fp = fopen("file1.txt", "a");
    if (fp == NULL)
    {
        printf("FILE can not be opened");
        return 0;
    }
    
    printf("\nEnter number of even integar you want to enter into the file1.txt: %d", n);
    scanf("%d", &n);
    fprintf(fp,"\nThis is append mode text.");
    fprintf(fp, "\nThe even numbers printed are as follows:\n");
    for (int i = 2; i <= n; i+=2)
    {
        fprintf(fp, "%d\n", i);
    }
    fclose(fp);
    return 0;
}