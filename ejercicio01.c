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

void hola_hasta(int n)
{
    int i = 0;
    while (i < n)
    {
        printf("Hola\n");
        i++;
    }
}

int main(void)
{
    int n = pedir_entero('n');
    assert(n > 0);
    hola_hasta(n);

    return 0;
}
