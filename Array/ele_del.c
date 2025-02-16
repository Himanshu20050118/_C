#include <stdio.h>

int main()
{
    int a[10], ele, i;
    printf("Enter the elements of array: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element you want to delete: ");
    scanf("%d", &ele);
    for (i = 0; i < 10; i++)
    {
        if (ele == a[i])
        {
            printf("%d is found at index %d", ele, i);
            break;
        }
    }
    if (i < 10)
    {
        for (int j = i; j < 9; j++)
            a[j] = a[j + 1];
    }
    printf("\nArray elements after deletion:");
    for (i = 0; i < 9; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}