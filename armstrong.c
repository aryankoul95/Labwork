#include <stdio.h>
int main()
{
    int r, n, c, arm = 0;
    printf("Enter the number");
    scanf("%d", &n);
    c = n;
    while (n > 0)
    {
        r = n % 10;
        arm = (r * r * r) + arm;
        n = n / 10;
    }
    if (c == arm)
        printf("It is armstrong number");
    else
        printf("It is not armstrong number");
}