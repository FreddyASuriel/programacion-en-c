#include <stdio.h>
int main() {
  float costo, entregado, cambio;

  printf("Ingrese el costo del articulo: ");
  scanf("%f", &costo);

  printf("Ingrese la cantidad de dinero entregada: ");
  scanf("%f", &entregado);

  cambio = entregado - costo;

  printf("El cambio es: %.2f\n", cambio);

  return 0;
}