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

int main(void)
{
    int a[N];
    pedir_arreglo(N, a);
    imprimir_arreglo(N, a);

    return 0;
}
