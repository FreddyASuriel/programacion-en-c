#include <stdio.h>
int main() {
  float num1, num2, suma, resta, multiplicacion;

printf("Ingrese el primer numero: ");
scanf("%f", &num1);

printf("Ingrese el segundo numero: ");
scanf("%f", &num2);

suma = num1 + num2;
resta = num1 - num2;
multiplicacion = num1 * num2;

printf("La suma es: %.2f\n", suma);
printf("La resta es: %.2f\n", resta);
printf("La multiplicacion es: %.2f\n", multiplicacion);

return 0;
}