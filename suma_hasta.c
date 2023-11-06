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

int suma_hasta(int n)
{
    return n * (n + 1) / 2;
}

int main(void)
{
    int n = pedir_entero('n');
    assert(n >= 0);
    printf("%d\n", suma_hasta(n));

    return 0;
}
