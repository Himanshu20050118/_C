#include <stdio.h>

int main()
{
    int i, j;

    for (i = 0; i < 10; i++)
    { // Loop for rows
        for (j = 0; j < 10; j++)
        { // Loop for columns
            // Check if the position is in the border or the hollow diamond
            if (i == 0 || i == 9 || j == 0 || j == 9)
            {
                // Print 'o' for the square border
                printf("o");
            }
            else if (j <= i && j >= 9 - i)
            {
                // Print 'o' for the top hollow part of the diamond
                printf(" ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
