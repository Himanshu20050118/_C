#include <stdio.h>
int main()
{
    int arr[100], i, j, k, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n;)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n; k++)
                    arr[k] = arr[k + 1];
                n--;
            }
            else
                j++;
        }
    }
    printf("Elements of elements after removing duplicates: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}