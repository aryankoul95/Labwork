#include <stdio.h>
void main()
{
    int num, times, max = -999999;
    printf("Enter a number of element you want");
    scanf("%d", &times);
    for (int i = 1; i, i <= times; i++)
    {
        printf("Enter the number");
        scanf("%d", &num);
        if (num > max)
        {
            max = num;
        }
    }
    printf("The maximum value is = %d", max);
}