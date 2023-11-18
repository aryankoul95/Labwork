#include <stdio.h>
int main()
{
    int n, side, c, d, l, b, r, pi;
    printf("Enter your choice from 1 To 3\n 1=Square\n 2=Rectangle\n 3=Circle\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter the side of square");
        scanf("%d", &side);
        c = side * side;
        d = 4 * side;
        printf("Area of square =%d", c);
        printf("Perimeter of square =%d", d);
        break;
    case 2:
        printf("Enter the length and breadth of rectangle");
        scanf("%d%d", &l, &b);
        c = l * b;
        d = 2 * (l + b);
        printf("Area of rectangle =%d", c);
        printf("Perimeter of rectangle =%d", d);
        break;
    case 3:
        printf("Enter the radius of circle");
        scanf("%d", &r);
        pi = 3.14;
        c = pi * r * r;
        d = 2 * pi * r;
        printf("Area of circle =%d", c);
        printf("Perimeter of circle =%d", d);
        break;
    }
    return 0;
}