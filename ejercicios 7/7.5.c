#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int i;
    double d;
    long l;
    char cad0[20], *cad1;
    printf("\nIngrese una cadena de caracteres: ");
    fgets(cad0, 20, stdin);
    i = atoi(cad0);
    printf("\n%s \t %d", cad0, i+3);
    printf("\nIngrese una cadena de caracteres: ");
    fgets(cad0, 20, stdin);
    d = atof(cad0);
    printf("\n%s \t %.2lf ", cad0, d+1.50);
    if (strspn(cad0, "0123456789.") == strlen(cad0)) {
        d = strtod(cad0, &cad1);
        printf("\n%s \t %.2lf", cad0, d+1.50);
        puts(cad1);
    } else {
        printf("\nCadena no válida\n");
    }
    fgets(cad0, 20, stdin);
    l = atol(cad0);
    printf("\n%s \t %ld ", cad0, l+10);
    if (strspn(cad0, "0123456789") == strlen(cad0)) {
        l = strtol(cad0, &cad1, 0);
        printf("\n%s \t %ld", cad0, l+10);
        puts(cad1);
    } else {
        printf("\nCadena no válida\n");
    }
    return 0;
}