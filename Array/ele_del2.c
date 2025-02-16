#include <stdio.h>
int main()
{
    int i, j, r, ele, n;
    printf("Enter the size of array: ");
    scanf("%d", &r);
    int a[r];
    printf("Enter the elements of array one by one: ");
    for (i = 0; i < r; i++)
        scanf("%d",&a[i]);
    printf("Enter the elements you want to delete: ");
    scanf("%d", &ele);
    for (i = 0; i < r; i++)
    {
        if (ele ==a[i])
        {
            printf("The element is found at index: %d", i);
            break;
        }
    }
        if (i < r)
        {
            for (j = i; j < r-1; j++)
                a[j] = a[j + 1];
        }
    
    printf("\nArray elements after deletion are: ");
    for (i = 0; i < r - 1; i++)
        printf("%d ", a[i]);
    return 0;
}