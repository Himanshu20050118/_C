/*
Q37.WAP to create a dynamic array having n elements input by the user. Display contents of this
dynamic array in reverse order.
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    int n, *arr; // n is the size of the array, arr is the pointer to the dynamic array
    
    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!");
        return;
    }

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the array in reverse order
    printf("Contents of the array in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    // Free the dynamically allocated memory
    free(arr);
}