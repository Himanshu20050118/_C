#include <stdio.h>
int main()
{
    int count = 0, n;
    do
    {
        printf("Enter positive number: ");
        scanf("%d", &n);
        if (n <= 0)
        {
            break;
        }
        count++;
    } 
    while (n > 0);
    printf("count of all positive number is %d", count);
    return 0;
}