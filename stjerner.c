#include <stdio.h>

int main()
{
    int x[2]; // integer
    int *ptr; // peker til integer

    ptr = &x[0]; // sette peker ptr til adressen av x

    x[0] = 1;
    x[1] = 2;
    printf("x[0]=%d x[1]=%d\n", x[0], x[1]);

    *ptr = 2;
    printf("x[0]=%d x[1]=%d\n", x[0], x[1]);

    ptr = ptr + 1;
    *ptr = 3;
    printf("x[0]=%d x[1]=%d\n", x[0], x[1]);

    sub(&x[1]);
    printf("x[0]=%d x[1]=%d\n", x[0], x[1]);

    sub(x);
    printf("x[0]=%d x[1]=%d\n", x[0], x[1]);
}

void sub(int *x)
{
    int a;
    a = 2 * (*x);

    *x = a;
}