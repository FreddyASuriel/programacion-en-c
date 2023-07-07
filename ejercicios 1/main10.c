#include <stdio.h>

int main() {
int num, dig1, dig2, dig3, dig4;

printf("Ingrese un numero de cuatro digitos: ");
  scanf("%d", &num);

dig1 = num / 1000;      // obtiene el primer digito
dig2 = (num % 1000) / 100;  // obtiene el segundo digito
dig3 = (num % 100) / 10;    // obtiene el tercer digito
dig4 = num % 10;        // obtiene el cuarto digito

  printf("Los digitos son: %d, %d, %d y %d\n", dig1, dig2, dig3, dig4);

  return 0;
}