#include <stdio.h>

void main()
{
    float a, b;

    printf("Enter the First floating value: ");
    scanf("%f", &a);

    printf("Enter the second floating value: ");
    scanf("%f", &b);

    printf("The multiplication of two numbers %.1f and %.1f is %.3lf", a, b, (a * b));
}