#include <stdio.h>

void main()
{
    char ch;

    printf("Enter the character ");
    scanf("%c", &ch);

    printf("The Ascii value of %c is %d", ch, ch);
}