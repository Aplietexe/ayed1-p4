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

int pedir_entero(char name)
{
    int x;
    printf("Ingrese %c\n", name);
    scanf("%d", &x);
    return x;
}

void intercambiar(int tam, int a[], int i, int j)
{
    int aux = a[i];
    a[i] = a[j];
    a[j] = aux;
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

    int i = pedir_entero('i');
    int j = pedir_entero('j');
    assert(i >= 0 && i < N);
    assert(j >= 0 && j < N);

    intercambiar(N, a, i, j);

    imprimir_arreglo(N, a);

    return 0;
}
