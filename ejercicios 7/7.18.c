#include <stdio.h>
void inverso(char *); /* Prototipo de función. */

int main(void)
{
    char fra[50];
    printf("\nIngrese la línea de texto: ");
    fgets(fra, 50, stdin);
    printf("\nEscribe la línea de texto en forma inversa: ");
    inverso(fra);
    return 0;
}

void inverso(char *cadena)

{
    if (cadena[0] != '\0')
    {
        inverso(&cadena[1]);
        putchar((int)cadena[0]);
    }
}
