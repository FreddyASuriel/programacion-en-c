#include <stdio.h>
#include <math.h>

int main() {
  float x1, y1, x2, y2, x3, y3;
  float a, b, c, s, area;

  printf("Ingrese las coordenadas de p1 (x, y): ");
  scanf("%f %f", &x1, &y1);
  
  printf("Ingrese las coordenadas de p2 (x, y): ");
  scanf("%f %f", &x3, &y3);

  printf("Ingrese las coodenadas de p3 (x,y): ");
  scanf("%f %f", &x3, &y3);

  a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
  c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

  s = (a + b + c) / 2;

  area = sqrt(s * (s - a) * (s - b) * (s - c));

  printf("La superficie del triangulo es:%2.f\n", area);

  return 0;
}