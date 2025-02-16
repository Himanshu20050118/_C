#include <stdio.h>
int Ackermann(unsigned int, unsigned int);
int Ackermann(unsigned int m, unsigned int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    else if (m > 0 && n == 0)
        return Ackermann(m - 1, 1);
    else if (m > 0 && n > 0)
        return Ackermann(m - 1, Ackermann(m, n - 1));
    else
        return -1;
}
int main()
{
    unsigned int m, n;
    printf("Enter positive values for m and n: ");
    scanf("%u %u", &m, &n);
    printf("Ackermann(%u, %u) = %u\n", m, n, Ackermann(m, n));
    return 0;
}
