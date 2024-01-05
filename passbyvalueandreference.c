#include <stdio.h>

// Function to swap two numbers using pass by value
void swapByValue(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

// Function to swap two numbers using pass by reference
void swapByReference(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 5, b = 10;

    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Using pass by value
    swapByValue(a, b);
    printf("\nAfter swapping by value (no change):\n");
    printf("a = %d, b = %d\n", a, b);

    // Using pass by reference
    swapByReference(&a, &b);
    printf("\nAfter swapping by reference:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
