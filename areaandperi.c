#include <stdio.h>
void main()
{
    float r;
    printf("Enter the radius");
    scanf("%f", &r);
    float area, perimeter;
    area = 3.14 * r * r;
    perimeter = 2 * 3.14 * r;
    printf("Area of circle=%2f\n", area);
    printf("Perimeter of circle=%2f\n", perimeter);
    float s;
    printf("Enter the side");
    scanf("%f", &s);
    float a, p;
    a = s * s;
    p = 4 * s;
    printf("Area of square=%2f\n", a);
    printf("Perimeter of square=%2f\n", p);
    float l, b;
    printf("Enter the length and breadth");
    scanf("%f%f", &l, &b);
    float A, P;
    A = l * b;
    P = 2 * (l + b);
    printf("Area of rectangle=%2f\n", A);
    printf("Perimeter of rectangle=%2f\n", P);
}