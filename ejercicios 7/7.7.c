#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char cad0[] = "Hola México";
    char cad1[] = "Hola Guatemala";
    char cad2[] = "Hola Venezuela";
    char cad3[] = "Hola México";
    char *c, c3;
    i = strcmp(cad0, cad1);
    printf("\nResultado de la comparación —cad0 y cad1—: %d", i);
    i = strcmp(cad0, cad2);
    printf("\nResultado de la comparación —cad0 y cad2—: %d", i);
    i = strcmp(cad0, cad3);
    printf("\nResultado de la comparación —cad0 y cad3—: %d", i);
    i = strlen(cad0);
    printf("\nLongitud cadena cad0: %d", i);
    i = strlen(cad1);
    printf("\nLongitud cadena cad1: %d", i);
    c = strchr(cad1, 'G');
    if (c != NULL && *c == 'G') // Verificar que el caracter buscado se encuentra en la cadena
    { 
        c3 = *c;
        printf("\nEl valor de c3 es: %c", c3);
    }
    c = strchr(cad2, 'V');
    if (c != NULL && *c == 'V') // Verificar que el caracter buscado se encuentra en la cadena
    { 
        c3 = *c;
        printf("\nEl valor de c3 es: %c", c3);
    }
    return 0;
}