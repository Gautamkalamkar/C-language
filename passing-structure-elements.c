// passing structure elements in c

#include <stdio.h>

struct book
{
    char name[25];
    char author[25];
    int pages;
};

void display1(char *, char *, int);
void display2(struct book);
void display3(struct book *);

void main()
{
    struct book b1 = {"Life", "Gautam", 250};
    display1(b1.name, b1.author, b1.pages);
    display2(b1);
    display3(&b1);
}

void display1(char *n, char *p, int a)
{
    printf("\n%s %s %d", n, p, a);
}

void display2(struct book b1)
{
    printf("\n%s %s %d", b1.name, b1.author, b1.pages);
}

void display3(struct book *b1)
{
    printf("\n%s %s %d", b1->name, b1->author, b1->pages);
}