#include <stdio.h>

void main()
{
    int num1, num2, temp;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Swapped values: ");
    printf("\nNum1: %d", num1);
    printf("\nNum2: %d", num2);
}