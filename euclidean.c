#include <stdio.h>
#include <math.h>
int main()
{
    float x1, x2, y1, y2;
    printf("Enter the points");
    scanf("%f%f%f%f", &x1, &x2, &y1, &y2);
    float distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("The distance between two points is =%f", distance);
}