/* Q43. WAP to create a user defined data type named ABC using Union containing 3 heterogeneous members. Demonstrate the access of these members.*/

#include <stdio.h>

// Define the union type ABC
typedef union {
    int intValue;       // Integer member
    float floatValue;   // Float member
    char charValue;     // Character member
} ABC;

void main() {
    ABC data; // Create a variable of type ABC

    // Assign and demonstrate integer member
    data.intValue = 25;
    printf("Integer value: %d\n", data.intValue);

    // Assign and demonstrate float member
    data.floatValue = 7.5;
    printf("Float value: %.2f\n", data.floatValue);

    // Assign and demonstrate character member
    data.charValue = 'X';
    printf("Character value: %c\n", data.charValue);

    // Observe the effect of overwriting
    printf("\nFinal values after overwriting:\n");
    printf("Integer value: %d \n", data.intValue);
    printf("Float value: %.2f \n", data.floatValue);
    printf("Character value: %c\n", data.charValue);
}