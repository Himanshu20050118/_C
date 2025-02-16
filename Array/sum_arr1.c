// wap to print and read the elements of integer and calculate its sum in an arrray.
#include <stdio.h>
int main()
{
    int a[5] = {2, 3, 5, 7, 9}, sum = 0;
    printf("The integer of array are: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
        sum += a[i];
    }
    printf("\nThe sum of the array elements is: %d", sum);
    return 0;
}