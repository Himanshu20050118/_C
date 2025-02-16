// wap to print A2 B4 C6 D8 upto n terms.
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i = 0;
    char j;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (j = 'A'; j <= 'Z'; j++)
    {

        i += 2;
        printf("%c%d ", j, i);
        if (i == 2 * n)
        {
            break;
        }
    }

    getch();
    return 0;
}