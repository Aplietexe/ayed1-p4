#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <limits.h>
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

int minimo_pares(int n_max, int a[])
{
    int i = 0;
    int min = INT_MAX;
    while (i < n_max)
    {
        if (a[i] % 2 == 0 && a[i] < min)
            min = a[i];
        i++;
    }
    return min;
}

int minimo_impares(int n_max, int a[])
{
    int i = 0;
    int min = INT_MAX;
    while (i < n_max)
    {
        if (a[i] % 2 != 0 && a[i] < min)
            min = a[i];
        i++;
    }
    return min;
}

bool todos_pares(int n_max, int a[])
{
    int i = 0;
    while (i < n_max)
    {
        if (a[i] % 2 != 0)
            return false;
        i++;
    }
    return true;
}

bool todos_impares(int n_max, int a[])
{
    int i = 0;
    while (i < n_max)
    {
        if (a[i] % 2 == 0)
            return false;
        i++;
    }
    return true;
}

int main(void)
{
    int a[N];
    pedir_arreglo(N, a);
    int min_pares = minimo_pares(N, a);
    int min_impares = minimo_impares(N, a);
    if (!todos_impares(N, a))
        printf("El minimo de los pares es %d\n", min_pares);
    if (!todos_pares(N, a))
        printf("El minimo de los impares es %d\n", min_impares);
    printf("El minimo de todos es %d\n", min_pares < min_impares ? min_pares : min_impares);

    return 0;
}
