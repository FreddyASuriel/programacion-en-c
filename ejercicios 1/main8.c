#include <stdio.h>

int main() {
  int DIS, MIN, SEG, CEN; // Declaracion de variables
  float tiempo_en_horas, velocidad; // Declaracion de variables

  // pedir al usuario la distancia y el tiempo en minutos, segundos ycentesimas
  printf("Ingrese la distancia recorrida (metros): ");
  scanf("%d", &DIS);
  printf("Ingrese el tiempo empleado (minutos, segundos, centesimas): ");
  scanf("%d%d%d", &MIN, &SEG, &CEN);

  // convertir el tiempo a horas
  tiempo_en_horas = (MIN = 60.0 + SEG + CEN / 100.0) / 3600.0;

  // convertir la distancia en kilometros
  float distancia_en_km = DIS / 1000.0;

  // calcular la velocidad en km/h
  velocidad = distancia_en_km / tiempo_en_horas;

  // mostrar el resultado en km/h
  printf("La velocidad es de %.2f km/h\n", velocidad);

  return 0;
}