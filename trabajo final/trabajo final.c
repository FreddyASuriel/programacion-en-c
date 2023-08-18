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
        strcpy(procedimiento, "Llamar al equipo de emergencia y administrar aspirina.");
    } else if (strcmp(respuestas[2], "fiebre alta\n") == 0) {
        strcpy(procedimiento, "Administrar acetaminofén y descansar en cama.");
    } else if (strcmp(respuestas[2], "dolor de cabeza\n") == 0) {
        strcpy(procedimiento, "Tomar ibuprofeno y descansar en un lugar tranquilo.");
    } else if (strcmp(respuestas[2], "dificultad para respirar\n") == 0 && strcmp(respuestas[3], "sí\n") == 0) {
        strcpy(procedimiento, "Administrar inhalador de rescate y buscar atención médica de inmediato.");
    } else if (strcmp(respuestas[2], "dolor abdominal\n") == 0 && strcmp(respuestas[4], "sí\n") == 0) {
        strcpy(procedimiento, "Evitar alimentos sólidos y tomar antiácidos para el alivio temporal.");
    } else {
        strcpy(procedimiento, "Consultar con el médico para una evaluación más precisa.");
    }

    printf("\nPROCEDIMIENTO O MEDICAMENTO RECOMENDADO:\n");
    printf("%s\n", procedimiento);

    return 0;
}