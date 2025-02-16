#include <stdio.h>
int swap(int *, int *);
int swap(int *a, int *b)
{
    // int temp;
    // temp=*a;
    // *a=*b;
    // *b=temp;
    // int *temp;
    // *temp = *a;
    // *a = *b;
    // *b = *temp;

    //swapping using call by reference and by bitwise operator....
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main()
{
    int a, b;
    printf("Enter the valuse of a: ");
    scanf("%d", &a);
    printf("Enter the valuse of b: ");
    scanf("%d", &b);
    printf("The number before swapping are: %d,%d", a, b);
    swap(&a, &b);
    printf("\nThe number after swapping are: %d,%d", a, b);

    return 0;
}