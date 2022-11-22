// Array of structures

#include <stdio.h>
void floatlink();

void main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };
    struct book b[10];

    int dh = 0;
    for (int i = 0; i <= 9; i++)
    {
        printf("\nEnter the name.price and pages of books:");
        scanf("%c%f%d", &b[i].name, &b[i].price, &b[i].pages);
        while ((dh = getchar()) != '\n')
            ;
    }

    for (int i = 0; i <= 9; i++)
    {
        printf("\n%c %f %d", b[i].name, b[i].price, b[i].pages);
    }
}

void linkfloat()
{
    float a = 0, *b;
    b = &a;
    a = *b;
}