#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 3; ++i)
    {
        for (j = 1; j <= 3; ++j)
        {
            for (k = 1; k <= 3; ++k)
                printf(" %d", k);
            printf("\n");
        }
    }
    return 0;
}