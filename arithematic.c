#include <stdio.h>
void main()
{
    float a, b, c;
    printf("Enter the two numbers");
    scanf("%f,&a,&b");
    c = a + b;
    printf("Addition=%f\n", c);
    c = a - b;
    printf("Subtraction=%f\n", c);
    c = a * b;
    printf("Product=%f\n", c);
    c = a / b;
    printf("Division=%f\n", c);
}
