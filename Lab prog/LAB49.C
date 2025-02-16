/*
Q49. WAP to count the number of characters and words in the given file.
*/

#include <stdio.h>
void main() {
    FILE *file;
    char filename[100], ch;
    int charCount = 0, wordCount = 0, inWord = 0;

    // Prompt the user to enter the file name
    printf("Enter the file name to count characters and words: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file %s\n", filename);
        return;
    }

    // Read each character from the file
    while ((ch = fgetc(file)) != EOF) {
        // Count characters
        charCount++;

        // Check if the character is a space, tab, or newline
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            if (inWord) {
                wordCount++;
                inWord = 0;
            }
        } else {
            // If the character is not a space, we are in a word
            inWord = 1;
        }
    }

    // If the file ends while still inside a word, count the last word
    if (inWord) {
        wordCount++;
    }

    // Display the results
    printf("Total characters: %d\n", charCount);
    printf("Total words: %d\n", wordCount);

    // Close the file
    fclose(file);
}