/* q48. WAP to copy contents of this file to another file.*/

#include <stdio.h>

void main() {
    FILE *sourceFile, *destinationFile;
    char sourceFilename[100], destinationFilename[100], ch;

    // Prompt the user to enter the source and destination file names
    printf("Enter the source file name: ");
    scanf("%s", sourceFilename);
    printf("Enter the destination file name: ");
    scanf("%s", destinationFilename);

    // Open the source file in read mode
    sourceFile = fopen(sourceFilename, "r");

    // Check if the source file was opened successfully
    if (sourceFile == NULL) {
        printf("Error opening source file %s\n", sourceFilename);
        return;
    }

    // Open the destination file in write mode
    destinationFile = fopen(destinationFilename, "w");

    // Check if the destination file was opened successfully
    if (destinationFile == NULL) {
        printf("Error opening destination file %s\n", destinationFilename);
        fclose(sourceFile);  // Close the source file before returning
        return;
    }

    // Copy contents from source file to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    // Confirm the contents have been copied
    printf("Contents of %s have been copied to %s\n", sourceFilename, destinationFilename);

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);
}