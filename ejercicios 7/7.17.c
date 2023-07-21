#include <stdio.h>
#include <string.h>
char *inverso(char *); /* Prototipo de función. */

int main(void)
{
    char fra[50], aux[50];
    printf("\nIngrese la línea de texto: ");
    fgets(fra, 50, stdin);
    strcpy(aux, inverso(fra)); /* Se copia a aux el resultado de la función inverso. */
    printf("\nEscribe la línea de texto en forma inversa: ");
    puts(aux);
    return 0;
}

char *inverso(char *cadena)
{
    int i = 0, j, lon;
    char cad;
    lon = strlen(cadena);
    j = lon - 1;
    while (i < ((lon - 1) / 2))
        cad = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = cad;
        i++;
        j--;
    }
    return (cadena);
}
