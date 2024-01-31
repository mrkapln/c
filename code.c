#include <stdio.h>

struct S
{
    int x;
};

void sub(struct S p)
{
    printf("s.x = %d\n", p.x);
    p.x = 2;
    printf("adressen av p = %p\n", &p);
    printf("s.x = %d\n", p.x);
}

void main()
{
    struct S s;
    s.x = -1;
    printf("adressen av s = %p\n", &s);

    printf("s.x = %d\n", s.x);
    sub(s);
    printf("s.x = %d\n", s.x);
}