#include <stdio.h>
#include <math.h>
int main() {
  float radio, generatriz, altura, area_base, area_lateral, area_total, volumen;

  printf("Ingrese el radio del cono: ");
  scanf("%f", &radio);

  printf("Ingrese la generatriz del cono: ");
  scanf("%f", &generatriz);

  printf("Ingrese la altura del cono: ");
  scanf("%f", &altura);

  area_base = M_PI * pow(radio, 2);
  area_lateral = M_PI * radio * generatriz;
  area_total = area_base + area_lateral;
  volumen = (M_PI * pow(radio,2) * altura) / 3;

  printf("Area de la base: %.2f\n", area_base);
  printf("Area lateral: %.2f\n", area_lateral);
  printf("Area tota: %.2f\n", area_total);
  printf("Volumen: %.2f\n", volumen);

  return 0;
}