#include <stdio.h>

int main()
{
    int num, count = 2, sol = 1;

    printf("Enter a number\n");
    scanf("%d", &num);

    while (count < num)
    {
        if (num % count == 0)
        {
            sol = 0;
            break;
        }
        count++;
    }

    if (sol)
        printf("%d is prime number\n", num);
    else
        printf("%d is not prime number\n", num);

    return 0;
}