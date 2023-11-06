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

bool existe_multiplo(int m, int tam, int a[])
{
    int i = 0;
    while (i < tam)
    {
        if (a[i] % m == 0)
            return true;
        i++;
    }
    return false;
}

int pedir_entero(char name)
{
    int x;
    printf("Ingrese %c\n", name);
    scanf("%d", &x);
    return x;
}

int main(void)
{
    int a[N];
    pedir_arreglo(N, a);
    printf("p para todos_pares, m para existe_multiplo\n");
    char c;
    scanf(" %c", &c);

    if (c == 'p')
    {
        if (todos_pares(N, a))
            printf("Todos pares\n");
        else
            printf("No todos pares\n");
    }
    else if (c == 'm')
    {
        int m = pedir_entero('m');
        if (existe_multiplo(m, N, a))
            printf("Existe multiplo\n");
        else
            printf("No existe multiplo\n");
    }
    return 0;
}
