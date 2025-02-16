#include <stdio.h>
int main()
{
    char a;
    printf("Enter input: ");
    scanf("%c", &a);
    if (a >= 65 && a <= 90)
    {
        printf("%c is a uppercase", a);
    }
    else if (a >= 97 && a <= 122)
    {
        printf("%c is a lower case\n", a);
    }
    else if (a >= 48 && a <= 57)
    {
        printf("%c is a digit", a);
    }
    else if ((a >= 0 && a <= 47) || (a >= 58 && a <= 64) || (a >= 91 && a <= 96) || (a >= 123 && a <= 127))
    {
        printf("%c is a special symbol", a);
    }
    else
        printf("invalid input");
    return 0;
}