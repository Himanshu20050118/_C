#include <stdio.h>
// float per(int mps[5], float m[5]);
float per(int mps[5], float m[5])
{
    float tmarks = 0, perc;
    int tmpsk = 0;
    for (int i = 0; i < 5; i++)
    {
        tmarks += m[i];
        tmpsk += mps[i];
    }
    perc = (tmarks / tmpsk) * 100;
    return perc;
}

int main()
{

    int tmps[5],n;
    float omarks[5];
    float perce;
    // printf("Enter the size of the array: ");
    // scanf("%d", &n);
    printf("Enter the obtained marks per subject: ");
    for (int i = 0; i < 5; i++)
        scanf("%f", &omarks[i]);
    printf("Enter the total marks per subject: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &tmps[i]);
    perce = per(tmps, omarks);
    printf("Percentage marks: %f", perce);
    return 0;
}