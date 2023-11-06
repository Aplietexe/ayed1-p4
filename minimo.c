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
    int x = pedir_entero('x');
    int y = pedir_entero('y');
    assert(1);

    if (x < y)
        y = x;
    printf("%d\n", y);
    assert(y >= x);

    return 0;
}
