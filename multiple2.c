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
    int Z = pedir_entero('z'), z = Z;

    int x_og = x;
    x = y;
    y = y + x_og + z;
    z = x + x_og;

    printf("x=%d, y=%d, z=%d\n", x, y, z);
    assert(x == Y && y == X + Y + Z && z == X + Y);

    return 0;
}
