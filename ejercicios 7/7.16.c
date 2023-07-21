#include <stdio.h>
#include <string.h>
int main(void)
{
    char cad1[50], cad2[50], cad0[50];
    int i = 0;
    printf("\nIngrese la primera cadena de caracteres: ");
    fgets(cad1, 50, stdin);
    printf("\nIngrese la cadena a buscar: ");
    fgets(cad2, 50, stdin);
    strcpy(cad0, cad1); /* Se copia la cadena original a cad0. */
    char *ptr = strstr(cad0, cad2);
    while (ptr != NULL)
    {
        i++;
        ptr = strstr(ptr + 1, cad2);
    }
    printf("\nEl número de veces que aparece la segunda cadena es: %d", i);
    return 0;
}
