#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <ctype.h>

char pedir_char(void)
{
    char x;
    printf("Ingrese una letra\n");
    scanf("%c", &x);
    return x;
}

bool es_vocal(char letra)
{
    return letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u';
}

int main(void)
{
    char c = pedir_char();
    c = tolower(c);

    if (es_vocal(c))
        printf("Es vocal\n");
    else
        printf("No es vocal\n");

    return 0;
}
