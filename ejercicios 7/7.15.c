#include <stdio.h>
#include <ctype.h>
void interpreta(char *); /* Prototipo de función. */

int main(void)
{
    char cad[50];
    printf("\nIngrese la cadena de caracteres: ");
    fgets(cad, 50, stdin);
    interpreta(cad);
    return 0;
}

void interpreta(char *cadena)

{
    int i = 0, j, k;
    while (cadena[i] != '\0')
    {
        if (isalpha(cadena[i])) /* Se utiliza isalpha para observar si el caracter es una letra. */
        {
            k = cadena[i - 1] - 48;
            for (j = 0; j < k; j++)
                putchar(cadena[i]);
        }
        i++;
    }
}
