#include <stdio.h>
#include <string.h>
#include <ctype.h>
int cuentap(char *);

int main(void)
{
    int i;
    char fra[50];
    printf("\nIngrese la línea de texto: ");
    fgets(fra, 50, stdin);
    strcat(fra, " ");
    i = cuentap(fra);
    printf("\nLa línea de texto tiene %d palabras", i);
    return 0;
}

int cuentap(char *cad)
{
    char *cad0 = " ";
    int i = 0;
    cad0 = strstr(cad, " ");
    while (strcmp(cad, " "))
    {
        strcpy(cad, cad0);
        i++;
        cad0 = strstr(cad + 1, " ");
    }
    return (i);
}
