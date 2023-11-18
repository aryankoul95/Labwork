#include <stdio.h>
void main()
{
    char b;
    printf("Enter the char");
    scanf("%c", &b);
    if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u' || b == 'A' || b == 'E' || b == 'I' || b == 'O' || b == 'U')
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is a consonant");
    }
}