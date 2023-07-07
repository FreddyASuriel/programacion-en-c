#include <stdio.h>

int main() {
  int dias, segundos;

  printf("Ingrese el numero de dias: ");
  scanf("%d", &dias);

  segundos = dias * 24 * 60 * 60;

  printf("Hay %d segundos en %d dias.\n", segundos, dias);

  return 0;
}