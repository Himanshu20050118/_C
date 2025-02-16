#include <stdio.h>

int main()
{
    int i, j, k, a[5], b[5], final[10];
    printf("Enter the value of array[a]:");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    printf("\nEnter the value of array[b]:");
    for (j = 0; j < 5; j++)
        scanf("%d", &b[j]);
    i=0;j=0; k=0;
    while (i < 5 && j < 5)
    {
        if (a[i] <= b[j])
        {
            final[k] = a[i];
            i++;
            k++;
        }
        else
        {
            final[k] = b[j];
            j++;
            k++;
        }
    
    }
     while(i < 5)
    {
        final[k] = a[i];
        i++;
        k++;
    }
    while(j < 5)
    {
        final[k] = b[j];
        j++;
        k++;
    }

    printf("Array elements after merging is: ");
    for (k = 0; k < 10; k++)
        printf("%d", final[k]);
    return 0;
}