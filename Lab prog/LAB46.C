/* q46. WAP to append contents to the end of the file.*/

#include <stdio.h>

void main() {
    FILE *file;
    char filename[100], data[1000];

    // Prompt the user to enter the file name
    printf("Enter the file name to append to: ");
    scanf("%s", filename);

    // Open the file in append mode
    file = fopen(filename, "a");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file %s\n", filename);
        return;
    }

    // Prompt the user to enter the data to append
    printf("Enter the data to append: ");
    getchar();  // Consume the newline character left by previous scanf
    fgets(data, sizeof(data), stdin);  // Read a line of input including spaces

    // Append the data to the file
    fputs(data, file);

    // Confirm the data has been appended
    printf("Data has been appended to the file.\n");

    // Close the file
    fclose(file);
}