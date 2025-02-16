#include <stdio.h>
int main()
{
    int a[10], min, max;
    printf("Enter the elements of array:");
    for (int i = 0; i < 10; i++)
        scanf("%d",&a[i]);
    min = a[0];
    max = a[0] ;
    for (int j = 1; j < 10; j++)
    {
        if (a[j] < min)
            min = a[j];
        if (a[j] > max)
            max = a[j];
    }
    printf("The maximum value is %d", max);
    printf("\nThe minimumvalue is %d", min);
    return 0;
}