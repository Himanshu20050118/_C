
// Wap to write 50 odd numbewrs to the file1.txt.
// write"w" mode write an create a file if it is not exist and overwrite the content if it is already there....

#include <stdio.h>
int main()
{
    int n;
    FILE *fp;
    fflush(stdin);
    fp = fopen("file1.txt", "w");
    if (fp == NULL)
    {
        printf("FILE can not be opened");
        return 0;
    }
    
    printf("\nEnter number of odd integar you want to enter into the file1.txt: %d", n);
    scanf("%d", &n);
    fprintf(fp,"This is write mode text.");
    fprintf(fp, "\nThe odd numbers printed are as follows:\n");
    for (int i = 1; i <= n; i++)
    {
        fprintf(fp, "%d\n", i);
    }
    fclose(fp);
    return 0;
}