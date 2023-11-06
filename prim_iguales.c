#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#define N 5

void pedir_arreglo(int n_max, int a[])
{
    int i = 0;
    while (i < n_max)
    {
        printf("Ingrese a[%d]\n", i);
        scanf("%d", &a[i]);
        i++;
    }
}

void imprimir_arreglo(int n_max, int a[])
{
    int i = 0;
    while (i < n_max - 1)
    {
        printf("%d, ", a[i]);
        i++;
    }
    printf("%d\n", a[i]);
}

int prim_iguales(int n_max, int a[])
{
    int i = 0;
    while (i < n_max - 1)
    {
        if (a[i] != a[i + 1])
            break;
        i++;
    }
    return i + 1;
}

int main(void)
{
    int a[N];
    pedir_arreglo(N, a);
    int res = prim_iguales(N, a);
    printf("El mayor prefijo de elementos iguales es %d\n", res);
    imprimir_arreglo(res, a);

    return 0;
}
