#include <stdio.h>
#include <string.h>

/* Unions.
El programa muestra la manera como se declara una union, asi como la forma de acceso a los campos de las variables de tipo union tanto para asignacion de valores como para lectura y escritura. */

union datos      /* Declaracion de una union. */
{
    char celular[15];
    char correo[20];
}; 

typedef struct    /* Declaracion de una estructura utilizando typedef. */
{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio; 
    union datos personales;
    /* Observa que uno de los campos de la estructura alumno es una union. */
} alumno;

void Lectura(alumno *a);   /* Prototipo de funcion. */

int main(void)
{
    alumno a1 = {120, "Maria", "Contabilidad", 8.9, {.celular = "5-158-40-50"}}, a2, a3; 
    /* Observa que solo el primer componente de una union puede recibir valores por medio de este tipo de asignaciones. */

    /* Para que puedas observar las diferentes formas en que los campos de las variables de tipo estructura alumno reciben valores, ingresamos los valores de los campos de tres formas diferentes. Los campos de a1 reciben valores directamente, los campos de a2 se leen en el programa principal, y los campos de a3 reciben valores a traves de una funcion. */
    printf("Alumno 2\n");
    printf("Ingrese la matricula: ");
    scanf("%d", &a2.matricula);
    fflush(stdin);
    printf("Ingrese el nombre: ");
    fgets(a2.nombre, sizeof(a2.nombre), stdin);
    fflush(stdin);
    printf("Ingrese la carrera: ");
    fgets(a2.carrera, sizeof(a2.carrera), stdin);
    printf("Ingrese el promedio: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);
    printf("Ingrese el correo electronico: ");
    fgets(a2.personales.correo, sizeof(a2.personales.correo), stdin);
    /* Observa que en la variable a2 de tipo estructura alumno el segundo campo de la union recibe un valor. */

    printf("Alumno 3\n");
    Lectura(&a3); /* Se llama a una funcion para leer los campos de la variable a3. */
  
    /* Impresion de resultados. */
    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.personales.celular);
    /* Observa que escribe el valor del telefono celular asignado. */
    puts(a1.personales.correo);
    /* Observa que si tratamos de imprimir el campo, escribe basura. */

    strcpy(a1.personales.correo, "hgimenez@hotmail.com"); /* Se ingresa ahora un valor al segundo campo de la union de la variable a1. */

    puts(a1.personales.celular);
    /* Ahora escribe basura en el campo del telefono celular. */
    puts(a1.personales.correo);
    /* Escribe el contenido del campo (hgimenez@hotmail.com). */

    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n", a2.promedio);
    puts(a2.personales.celular); /* Escribe basura. */
    puts(a2.personales.correo); /* Escribe el contenido del segundo campo. */

    printf("Ingrese el telefono celular del alumno 2: ");
    fflush(stdin);
    fgets(a2.personales.celular, sizeof(a2.personales.celular), stdin);

    puts(a2.personales.celular); /* Escribe el telefono celular ingresado. */
    puts(a2.personales.correo); /* Ahora escribe basura. */

    printf("\nDatos del alumno 3\n");
    printf("%d\n", a3.matricula);
    puts(a3.nombre);
    puts(a3.carrera);
    printf("%.2f\n", a3.promedio);
    puts(a3.personales.celular);
    puts(a3.personales.correo); /* Escribe basura. */

    return 0;
}

void Lectura(alumno *a)
/* La funcion Lectura se actualiza para leer los campos de una variable de tipo estructura alumno. */
{
    printf("\nIngresa la matricula: ");
    scanf("%d", &a->matricula);
    fflush(stdin);
    printf("Ingrese el nombre: ");
    fgets(a->nombre, sizeof(a->nombre), stdin);
    fflush(stdin);
    printf("Ingrese la carrera: ");
    fgets(a->carrera, sizeof(a->carrera), stdin);
    printf("Ingrese el promedio: ");
    scanf("%f", &a->promedio);
    fflush(stdin);
    printf("Ingrese el telefono celular: ");
    fgets(a->personales.celular, sizeof(a->personales.celular), stdin);
}
