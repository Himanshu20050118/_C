/*
q50. WAP to sort an array of string containing ten dictionary words input by the user into
alphabetical order and display the contents after sorting.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char words[10][100];
    char temp[100];
    int i, j;

    printf("Enter 10 dictionary words:\n");
    for (i = 0; i < 10; i++) {
        printf("Word %d: ", i + 1);
        fgets(words[i], 100, stdin);
        // Remove the trailing newline character
        for (j = 0; words[i][j] != '\0'; j++) {
            if (words[i][j] == '\n') {
                words[i][j] = '\0';
                break;
            }
        }
    }

    // Sort the words in alphabetical order using bubble sort
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (strcmp(words[j], words[j + 1]) > 0) {
                // Swap words[j] and words[j + 1]
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    printf("\nWords in alphabetical order:\n");
    for (i = 0; i < 10; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}