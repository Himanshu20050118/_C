#include <stdio.h>

void decToHex(int num)
{
    int rem;
    char hex[100]; // Array to store the hexadecimal digits
    int i = 0;

    // Convert decimal to hexadecimal
    while (num != 0)
    {
        rem = num % 16; // Get the remainder

        // Convert remainder to corresponding hex digit
        if (rem < 10)
            hex[i++] = rem + '0'; // For remainders 0-9
        else
            hex[i++] = rem - 10 + 'A'; // For remainders 10-15 (A-F)

        num = num / 16; // Reduce the number
    }

    printf("Hexadecimal equivalent: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hex[j]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    decToHex(n);
    return 0;
}
