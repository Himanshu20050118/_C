#include <stdio.h>

#define AREA_OF_RECTANGLE(length, width) ((length) * (width))
int main()
{
    int l, w;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &w);
    int area = AREA_OF_RECTANGLE(l, w);
    printf("The area of the rectangle is: %d\n", area);
    return 0;
    // int length, width;
    // printf("Enter the length of the rectangle: ");
    // scanf("%d", &length);
    // printf("Enter the width of the rectangle: ");
    // scanf("%d", &width);
    // int area = AREA_OF_RECTANGLE(length, width);
    // printf("The area of the rectangle is: %d\n", area);
    // return 0;
}
