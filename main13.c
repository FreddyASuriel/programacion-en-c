#include <stdio.h>
int main() {
  float lado, area_base, area_lateral, area_total, volumen;

  printf("Ingrese el lado del hexaedro/cubo: ");
  scanf("%f", &lado);

  area_base = lado * lado;
  area_lateral = 4 * lado * lado;
  area_total = area_base + area_lateral;
  volumen = lado * lado * lado;

  printf("El area de la base es: %f\n", area_base);
  printf("El area lateral es: %f\n", area_lateral);
  printf("El area total es: %f\n", area_total);
  printf("El volumen es: %f/n", volumen);

  return 0;
}