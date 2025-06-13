#include <stdio.h>

#define NUM_ESTUDIANTES 7

int main() {

    float notas[NUM_ESTUDIANTES];
    int aprobados = 0;
    float nota_minima = 7.0;
    
    printf("\nIngrese las notas de los %d estudiantes (valores entre 1.0 y 7.0):\n", NUM_ESTUDIANTES);
    printf("\n");

    for (int estudiante = 0; estudiante < NUM_ESTUDIANTES; estudiante++) {
        do {
            printf("Nota del estudiante %d: ", estudiante + 1);
            scanf("%f", &notas[estudiante]);

            if (notas[estudiante] < 1.0 || notas[estudiante] > 7.0) {
                printf("La nota debe estar entre 1.0 y 7.0. Intente nuevamente.\n");
            }
        } while (notas[estudiante] < 1.0 || notas[estudiante] > 7.0);
    }

    for (int i = 0; i < NUM_ESTUDIANTES; i++) {

        if (notas[i] >= 4.0) {
            aprobados++;
        }

        if (notas[i] < nota_minima) {
            nota_minima = notas[i];
        }
    }

    float porcentaje_aprobados = ((float)aprobados / NUM_ESTUDIANTES) * 100;

    printf("\n   Resultados:\n");
    printf("------------------\n");
    printf("Cantidad de estudiantes aprobados: %d\n", aprobados);
    printf("Porcentaje de estudiantes aprobados: %.2f%%\n", porcentaje_aprobados);
    printf("Nota mas baja registrada: %.1f\n", nota_minima);

    return 0;
}