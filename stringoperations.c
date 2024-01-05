#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], concatStr[200];
    int len1, len2, compareResult;

    // Input two strings
    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("Enter string 2: ");
    scanf("%s", str2);

    // Length of strings
    len1 = strlen(str1);
    len2 = strlen(str2);

    printf("\nString 1 length: %d\n", len1);
    printf("String 2 length: %d\n", len2);

    // Copy string
    strcpy(concatStr, str1);
    printf("\nString 1 copied to concatStr: %s\n", concatStr);

    // Concatenate strings
    strcat(concatStr, str2);
    printf("Concatenated string: %s\n", concatStr);

    // Compare strings
    compareResult = strcmp(str1, str2);
    if (compareResult == 0)
    {
        printf("The strings are equal.\n");
    }
    else if (compareResult < 0)
    {
        printf("String 1 is less than String 2.\n");
    }
    else
    {
        printf("String 1 is greater than String 2.\n");
    }

    // Find substring in a string
    char *substring;
    substring = strstr(concatStr, str2);
    if (substring != NULL)
    {
        printf("Substring '%s' found in '%s' at position: %ld\n", str2, concatStr, substring - concatStr);
    }
    else
    {
        printf("Substring '%s' not found in '%s'\n", str2, concatStr);
    }

    // Reverse a string
    printf("\nReversing String 1: ");
    for (int i = len1 - 1; i >= 0; i--)
    {
        printf("%c", str1[i]);
    }
    printf("\n");

    return 0;
}
