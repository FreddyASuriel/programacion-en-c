#include <stdio.h>
#define PI 3.14159

int main() {
  float radio, area, volumen;

  printf("Ingrese el radio de la esfera: ");
  scanf("%f", &radio);

  area = 4 * PI * radio * radio;
  volumen = 4.0 / 3.0 * PI * radio * radio * radio;

  printf("El area de la esfera en: %f\n", area);
  printf("El volumen de la esfera es: %f\n", volumen);

  return 0;
}