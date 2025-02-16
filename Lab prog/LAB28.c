/*q28. Write a menu based program to demonstrate all the string handling functions of string.h.
(Cover strlen, strcat, strcmp, strcpy, strrev, strupr,strlow, strncat,strncpy, strcmpi)*/

#include <stdio.h>
#include <string.h>

void main()
{
    char s1[100], s2[100], s3[100];
    int choice, n;

    do
    {
        // Display menu
        printf("\n\n--- String Handling Functions Menu ---\n");
        printf("1. Length of a string (strlen)\n");
        printf("2. Concatenate strings (strcat)\n");
        printf("3. Compare strings (strcmp)\n");
        printf("4. Copy string (strcpy)\n");
        printf("5. Reverse string (strrev)\n");
        printf("6. Convert to uppercase (strupr)\n");
        printf("7. Convert to lowercase (strlwr)\n");
        printf("8. Concatenate with n characters (strncat)\n");
        printf("9. Copy n characters (strncpy)\n");
        printf("10. Compare strings ignoring case (strcmpi)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline left by scanf

        switch (choice)
        {
        case 1:
        {
            printf("Enter a string: ");
            gets(s1);
            printf("Length of the string is: %lu\n", strlen(s1));
            break;
        }

        case 2:
        {
            printf("Enter first string: ");
            gets(s1);
            printf("Enter second string: ");
            gets(s2);
            strcat(s1, s2);
            printf("Concatenated string is: %s\n", s1);
            break;
        }

        case 3:
        {
            printf("Enter first string: ");
            gets(s1);
            printf("Enter second string: ");
            gets(s2);
            int result = strcmp(s1, s2);
            if (result == 0)
                printf("Strings are equal.\n");
            else if (result > 0)
                printf("First string is greater.\n");
            else
                printf("Second string is greater.\n");
            break;
        }

        case 4:
        {
            printf("Enter a string to copy: ");
            gets(s1);
            strcpy(s2, s1);
            printf("Copied string is: %s\n", s2);
            break;
        }

        case 5:
        {
            printf("Enter a string to reverse: ");
            gets(s1);
            strrev(s1); // May not be supported on some compilers
            printf("Reversed string is: %s\n", s1);
            break;
        }

        case 6:
        {
            printf("Enter a string to convert to uppercase: ");
            gets(s1);
            strupr(s1); // May not be supported on some compilers
            printf("Uppercase string is: %s\n", s1);
            break;
        }

        case 7:
        {
            printf("Enter a string to convert to lowercase: ");
            gets(s1);
            strlwr(s1); // May not be supported on some compilers
            printf("Lowercase string is: %s\n", s1);
            break;
        }

        case 8:
        {
            printf("Enter first string: ");
            gets(s1);
            printf("Enter second string: ");
            gets(s2);
            printf("Enter the number of characters to concatenate: ");
            scanf("%d", &n);
            getchar(); // Consume newline
            strncat(s1, s2, n);
            printf("Concatenated string is: %s\n", s1);
            break;
        }

        case 9:
        {
            printf("Enter a string to copy: ");
            gets(s1);
            printf("Enter the number of characters to copy: ");
            scanf("%d", &n);
            getchar(); // Consume newline
            strncpy(s2, s1, n);
            s2[n] = '\0'; // Ensure null-termination
            printf("Copied string is: %s\n", s2);
            break;
        }

        case 10:
        {
            printf("Enter first string: ");
            gets(s1);
            printf("Enter second string: ");
            gets(s2);
            int cmp = strcmpi(s1, s2); // May not be supported on some compilers
            if (cmp == 0)
                printf("Strings are equal ignoring case.\n");
            else if (cmp > 0)
                printf("First string is greater ignoring case.\n");
            else
                printf("Second string is greater ignoring case.\n");
            break;
        }

        case 0:
        {
            printf("Exiting program.\n");
            break;
        }

        default:
        {
            printf("Invalid choice! Please try again.\n");
        }
        }
    } while (choice != 0);
}