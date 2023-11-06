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

struct div_t
{
    int cociente;
    int resto;
};

struct div_t division(int x, int y)
{
    struct div_t r;
    r.cociente = x / y;
    r.resto = x % y;
    return r;
}

int main(void)
{
    int n = pedir_entero('n');
    int d = pedir_entero('d');
    assert(n >= 0 && d > 0);
    struct div_t r = division(n, d);
    printf("%d / %d = %d (resto %d)\n", n, d, r.cociente, r.resto);

    return 0;
}
