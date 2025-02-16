#include <stdio.h>
#include <math.h>
void main()
{
    int r, x, y;
    printf("Enter radius of circle ");
    scanf("%d", &r);
    printf("Enter vlaue of x ");
    scanf("%d", &x);
    printf("Enter value of y");
    scanf("%d", &y);
    if (x == 0 && y == 0)
        printf("point lies at the centre of the circle");
    else if ((x * x + y * y) == r*r)
        printf("point lies on the circle");
    else if (x < r && y < r && x > -r && y > -r)
        printf("Point lies inside the circle");
    else
        printf("point lies outside the circle");
}