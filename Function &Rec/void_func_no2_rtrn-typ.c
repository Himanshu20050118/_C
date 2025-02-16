// void functio with no return type and have arguments.
#include <stdio.h>
void line1();
void line1()
{
    for (int i = 1; i <= 100; i++)
        printf(".");
        printf("\n");
        
}
void line2(int);
void line2(int n)
{
    for (int i = 1; i <= n; i++)
        printf("*");
        printf("\n");
        
}
void Multiline(char, int, int);
void Multiline(char ch, int rows, int cols)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
            printf("%c",ch);
            printf("\n");    
    }
}

int main()
{
    printf("Sem: 1\n");
    line1();
    printf("Section: 2\n");
    line2(100);
    printf("Branch: Cse 2\n");
    Multiline('@', 3, 100);
    printf("College: DCE");
    return 0;
}
