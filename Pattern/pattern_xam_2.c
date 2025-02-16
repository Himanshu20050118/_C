#include <stdio.h>
/*
oooooooooo
oooo  oooo
ooo    ooo
oo      oo
o        o
o        o
oo      oo
ooo    ooo
oooo  oooo
oooooooooo
*/
int main()
{
    int i, j, k;

    // printf("enter number of rows: ");
    // scanf("%d", &r);

    // printf("enter number of col: ");
    // scanf("%d", &c);

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            if (i == 1 &&i == 10 && j == 1 && j == 10)
            {
                printf("*");
               printf("\n");}
            // }
            // // else if (i == 2 || i == 9 && j == 5 || j == 6)
            // //     printf("#");
            // // else if (i == 3 ||i == 8 && j == 7 ||j == 4 ||j == 5 || j == 6)
            // //     printf("#");
            // // else if (i == 4 || i == 7 && j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8)
            // //     printf("#");
            // else if (i == 5 || i == 6 && j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 ||j == 8 ||j == 9)
            //     printf("#");
       } 
    }
    return 0;
}