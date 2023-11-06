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

int sumatoria(int n_max, int a[])
{
    int i = 0;
    int sum = 0;
    while (i < n_max)
    {
        sum += a[i];
        i++;
    }
    return sum;
}

int main(void)
{
    int a[N];
    pedir_arreglo(N, a);
    printf("Sumatoria: %d\n", sumatoria(N, a));

    return 0;
}
