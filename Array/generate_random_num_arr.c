#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int numbers[10];
    srand(time(0)); // seed random number generator
    for (int i = 0; i < 10; i++)
    {
        numbers[i] = rand()%100; // random number between 0 to 100
        // numbers[i] = rand();
    }
    printf("Random numbers are:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", numbers[i]);
    return 0;
}