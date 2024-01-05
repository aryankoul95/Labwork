#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[])
{
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (end > start)
    {
        if (str[start++] != str[end--])
        {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

// Function to reverse a string
void reverseString(char str[])
{
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    while (end > start)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    if (isPalindrome(input))
    {
        printf("The entered string is a palindrome.\n");
        reverseString(input);
        printf("Reversed string: %s\n", input);
    }
    else
    {
        printf("The entered string is not a palindrome.\n");
    }

    return 0;
}
