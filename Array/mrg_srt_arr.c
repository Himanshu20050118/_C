#include <stdio.h>
int main()
{
    int i, j, k, n, m, a[100], b[100], c[200];
    printf("Enter the size of first array: ");
    scanf("%d", &n);
    printf("Enter the elements of the first array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the size of 2nd array: ");
    scanf("%d", &m);
    printf("Enter the elements of the 2nd array: ");
    for (j = 0; j < m; j++)
        scanf("%d", &b[j]);
    i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < m)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    printf("Array elements after merging: ");
    for (k = 0; k < n + m; k++)
    {
        printf("%d ", c[k]);
    }
    return 0;
}