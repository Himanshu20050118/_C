#include <stdio.h>
int *rev(int x[], int size);
int *rev(int x[], int size)
{
    int temp, i, j;
    j = size - 1;
    i = 0;
    while (i < j)
    {
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
        i++; // increment i
        j--; // decrement j
    }
    return x;
}

int main()
{
    int n, *Reverse, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int x[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &x[i]);
    Reverse = rev(x, n);
    printf("The elements in reverse order are: ");
    for (int i = 0; i < n; i++)
    {
        // printf("%d", x[i]);
        printf("%d", Reverse[i]);
    }
    return 0;
}