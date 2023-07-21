#include <stdio.h>
#include <string.h>
union datos
{
    char celular[15];
    char correo[20];
}; 

typedef struct
{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio; 
    union datos personales;
} alumno;

void Lectura(alumno *a);

int main(void)
{
    alumno a1 = {120, "Maria", "Contabilidad", 8.9, {.celular = "5-158-40-50"}}, a2, a3;
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

    printf("Alumno 3\n");
    Lectura(&a3);
  
    /* Impresion de resultados. */
    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.personales.celular);
    puts(a1.personales.correo);
    strcpy(a1.personales.correo, "hgimenez@hotmail.com");
    puts(a1.personales.celular);
    puts(a1.personales.correo);

    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n", a2.promedio);
    puts(a2.personales.celular);
    puts(a2.personales.correo);

    printf("Ingrese el telefono celular del alumno 2: ");
    fflush(stdin);
    fgets(a2.personales.celular, sizeof(a2.personales.celular), stdin);

    puts(a2.personales.celular);
    puts(a2.personales.correo);

    printf("\nDatos del alumno 3\n");
    printf("%d\n", a3.matricula);
    puts(a3.nombre);
    puts(a3.carrera);
    printf("%.2f\n", a3.promedio);
    puts(a3.personales.celular);
    puts(a3.personales.correo);

    return 0;
}

void Lectura(alumno *a)
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
