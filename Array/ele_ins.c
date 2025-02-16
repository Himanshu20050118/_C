#include <stdio.h>

int main()
{
    int a[20], n, inst, pos, i;
    printf("Enter the number of  elements of array :");
    scanf("%d", &n);
    printf("Enter the elements of array one by one: ");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the element you want to insert: ");
    scanf("%d", &inst);

    printf("Enter the index value where you want to insert the element: ");
    scanf("%d", &pos);
    
    for (i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[i] = inst; // a[pos]=inst
    printf("Array elements after insertion:");
    for (i = 0; i <= n; i++)
        printf("%d", a[i]);

    return 0;
}