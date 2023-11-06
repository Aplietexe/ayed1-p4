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
    int n = pedir_entero('n');
    int r = n;
    assert(1);
    if (r < 0)
        r = -r;
    printf("%d\n", r);
    assert(r >= 0 && (r == n || r == -n));

    return 0;
}
