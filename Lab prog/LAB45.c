/* q45. WAP to read a file and display its contents on the console.*/

#include <stdio.h>

void main() {
    FILE *file;
    char filename[100], ch;

    // Prompt the user to enter the file name
    printf("Enter the file name to read: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file %s\n", filename);
        return;
    }

    // Read and display the contents of the file
    printf("Contents of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);  // Display the character on the console
    }

    // Close the file after reading
    fclose(file);
}