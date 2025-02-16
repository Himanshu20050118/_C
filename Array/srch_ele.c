#include <stdio.h>
int main()
{
    int a[10], ele, i;
    printf("Enter the value of array: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    printf("Enter the element you want to search: ");
    scanf("%d", &ele);
    for (i = 0; i < 10; i++)
    {
        if (ele == a[i])
            {printf("The element is found at index %d", i);
            break;}
    }
    if (i == 10)
        printf("The element is not found");
    return 0;
}