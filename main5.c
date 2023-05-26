#include <stdio.h>

#define PI 3.14159

int main() {
  float radio, area, circunferencia;

  printf("Ingrese el radio del circulo: ");
  scanf("%f", &radio);

  area = PI * radio * radio;
  circunferencia = 2 * PI * radio;

  printf("El area del circulo es: %.2f\n", area);
  printf("La longitud de la circunferencia es: %2f\n", circunferencia);

  return 0;
}