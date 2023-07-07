#include <stdio.h>

int main() {
  float tipo_cambio = 19.94; // tipo de cambio de dolares a pesos
  float cantidad_dolares, cantidad_pesos; // Declaracion de variables

  //Pedir al usuario la cantidad de dolares
  printf("Introduce la cantidad de dolares: ");
  scanf("%f", &cantidad_dolares);

  // Realizar la conversion a pesos
  cantidad_pesos = cantidad_dolares * tipo_cambio;

  // Mostrar el resultado en pesos
  printf("%.2f dolares son %.2f pesos\n", cantidad_dolares, cantidad_pesos);

  return 0;
}