#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int pedir_entero(char name)
{
    int x;
    printf("Ingrese %c\n", name);
    scanf("%d", &x);
    return x;
}

int main(void)
{
    int X = pedir_entero('x'), x = X;
    int Y = pedir_entero('y'), y = Y;
    assert(1);
    y = x + y;
    x = x + 1;
    printf("x=%d, y=%d\n", x, y);
    assert(x == X + 1 && y == X + Y);

    return 0;
}
