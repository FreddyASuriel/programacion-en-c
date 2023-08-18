#include <stdio.h>
#include <string.h>

int main() {
    char respuestas[5][50];
    char procedimiento[100];

    printf("CUESTIONARIO DE EMERGENCIA\n");

    printf("1. ¿Cuál es su nombre completo? ");
    fgets(respuestas[0], sizeof(respuestas[0]), stdin);

    printf("2. ¿Cuál es su edad? ");
    fgets(respuestas[1], sizeof(respuestas[1]), stdin);

    printf("3. ¿Cuál es su síntoma principal? ");
    fgets(respuestas[2], sizeof(respuestas[2]), stdin);

    printf("4. ¿Ha tenido este síntoma antes? ");
    fgets(respuestas[3], sizeof(respuestas[3]), stdin);

    printf("5. ¿Está tomando algún medicamento actualmente? ");
    fgets(respuestas[4], sizeof(respuestas[4]), stdin);

    // Realizar la evaluación de respuestas y determinar el procedimiento o medicamento
    if (strcmp(respuestas[2], "dolor de pecho\n") == 0) {
        // Agregar más preguntas para el dolor de pecho
        printf("6. ¿Se irradia el dolor hacia el brazo izquierdo? ");
        fgets(respuestas[5], sizeof(respuestas[5]), stdin);

        if (strcmp(respuestas[5], "sí\n") == 0) {
            strcpy(procedimiento, "Llamar al equipo de emergencia y administrar aspirina.");
        } else {
            strcpy(procedimiento, "Consultar con el médico para una evaluación más precisa.");
        }
    } else if (strcmp(respuestas[2], "fiebre alta\n") == 0) {
        // Agregar más preguntas para la fiebre alta
        printf("6. ¿La fiebre ha durado más de 3 días? ");
        fgets(respuestas[5], sizeof(respuestas[5]), stdin);

        if (strcmp(respuestas[5], "sí\n") == 0) {
            strcpy(procedimiento, "Administrar acetaminofén y descansar en cama.");
        } else {
            strcpy(procedimiento, "Consultar con el médico para una evaluación más precisa.");
        }
    }
    // Repetir el patrón para cada enfermedad...

    else {
        strcpy(procedimiento, "Consultar con el médico para una evaluación más precisa.");
    }

    printf("\nPROCEDIMIENTO O MEDICAMENTO RECOMENDADO:\n");
    printf("%s\n", procedimiento);

    return 0;
}
