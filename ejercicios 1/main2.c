#include <stdio.h>
/* Aplicacion de operadores. */
int main(void) 
{
int i = 5, j = 4, k, l, m;
  k = !i * 3 + -- j * 2 - 3;
  printf("\nEl valor de k es: %d", k);

  printf("\nEl valor de 1 es: %d", 1);

  m = (k = (! (12 > 10)), j = (10 || 0) && k, (! (k || j)));
}