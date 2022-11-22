// Nested Structures in c

#include <stdio.h>
void main()
{
    struct address
    {
        char phone[15];
        char city[25];
        int pin;
    };

    struct emp
    {
        char name[25];
        struct address a;
    };

    struct emp e = {"jeru", "7400402507", "Mumbai", 410240};
    printf("\nname = %s\tphone = %s", e.name, e.a.phone);
    printf("\ncity = %s\tpin = %d", e.a.city, e.a.pin);
}