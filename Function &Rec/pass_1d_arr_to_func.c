
#include <stdio.h>
void modify(int b[3]);
void main()
{
    int arr[3] = {1, 2, 3};
    modify(arr);
    for (int i = 0; i < 3; i++)
        printf("%d", arr[i]);
}
void modify(int a[3])
{
    int i;
    for (i = 0; i < 3; i++)
        a[i] = a[i] * a[i];
}