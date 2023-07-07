#include <stdio.h>

int main(void)
{
    char p1, p2, p3 = '$';

    printf("\nIngrese un caracter: ");
    p1 = getchar();
    putchar(p1);
    printf("\n");

    // Limpiar el búfer de entrada
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("\nEl caracter p3 es: ");
    putchar(p3);
    printf("\n");

    printf("\nIngrese otro caracter: ");
    p2 = getchar();
    putchar(p2);
    printf("\n");

    // Limpiar el búfer de entrada
    while ((c = getchar()) != '\n' && c != EOF);

    return 0;
}