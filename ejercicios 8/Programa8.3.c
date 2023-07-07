#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
} domicilio;

struct empleado {
    char nombre[20];
    char departamento[20];
    float sueldo;
    domicilio direccion;
};

void Lectura(struct empleado *a) {
    printf("\nIngrese el nombre del empleado: ");
    scanf("%s", a->nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    scanf("%s", a->departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);
    fflush(stdin);
    printf("-- Ingrese la dirección del empleado --\n");
    printf("\tCalle: ");
    scanf("%s", a->direccion.calle);
    printf("\tNumero: ");
    scanf("%d", &a->direccion.numero);
    printf("\tCodigo Postal: ");
    scanf("%d", &a->direccion.cp);
    fflush(stdin);
    printf("\tLocalidad: ");
    scanf("%s", a->direccion.localidad);
}

int main(void) {
    struct empleado e0 = {"Arturo", "Compras", 15500.75, {"San Jeronimo", 120, 3490, "Toluca"}};
    struct empleado *e1, *e2;
    struct empleado e3, e4;

    e1 = (struct empleado *)malloc(sizeof(struct empleado));
    printf("\nIngrese el nombre del empleado 1: ");
    scanf("%s", e1->nombre);
    printf("Ingrese el departamento de la empresa: ");
    scanf("%s", e1->departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e1->sueldo);
    fflush(stdin);
    printf("-- Ingrese la dirección del empleado --\n");
    printf("\tCalle: ");
    scanf("%s", e1->direccion.calle);
    printf("\tNumero: ");
    scanf("%d", &e1->direccion.numero);
    printf("\tCodigo Postal: ");
    scanf("%d", &e1->direccion.cp);
    fflush(stdin);
    printf("\tLocalidad: ");
    scanf("%s", e1->direccion.localidad);

    printf("\nIngrese el nombre del empleado 3: ");
    scanf("%s", e3.nombre);
    printf("Ingrese el departamento de la empresa: ");
    scanf("%s", e3.departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e3.sueldo);
    fflush(stdin);
    printf("-- Ingrese la dirección del empleado --\n");
    printf("\tCalle: ");
    scanf("%s", e3.direccion.calle);
    printf("\tNumero: ");
    scanf("%d", &e3.direccion.numero);
    printf("\tCodigo Postal: ");
    scanf("%d", &e3.direccion.cp);
    printf("\tLocalidad: ");
    fflush(stdin);
    scanf("%s", e3.direccion.localidad);

    e2 = (struct empleado *)malloc(sizeof(struct empleado));
    Lectura(e2);

    Lectura(&e4);

    printf("\nDatos del empleado 1\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s",
e1->nombre, e1->departamento, e1->sueldo,
           e1->direccion.calle, e1->direccion.numero, e1->direccion.cp, e4.direccion.localidad);
}
