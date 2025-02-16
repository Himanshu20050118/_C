#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Welcome by AiR\n");

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        printf("a is max\n");
    }
    else if (b >= a && b >= c)
    {
        printf("b is max\n");
    }
    else
    {
        printf("c is max\n");
    }

    printf("Thanks..! \nBye\n");

    return 0;
}
