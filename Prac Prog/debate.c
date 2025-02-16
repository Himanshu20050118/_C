#include <stdio.h>

int main() {
    int arr[10]; // Define an array of size 10
    int n;

    printf("Enter the number of elements (max 10): ");
    scanf("%d", &n);

    // Check if n exceeds the array bounds
    if (n > 10 || n < 1) {
        printf("Error: Number of elements must be between 1 and 10.\n");
        return 1; // Exit the program
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The elements you entered are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Next statement after loop
    printf("Input complete. Moving to the next steps.\n");

    return 0;
}
