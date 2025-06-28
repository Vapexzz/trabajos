#include <stdio.h>

#define TAM 5

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

float calcular_promedio_curso(struct Estudiante alumnos[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += alumnos[i].promedio;
    }
    return suma / n;
}

int buscar_mejor_estudiante(struct Estudiante alumnos[], int n) {
    int indice = 0;
    for (int i = 1; i < n; i++) {
        if (alumnos[i].promedio > alumnos[indice].promedio) {
            indice = i;
        }
    }
    return indice;
}

int main() {
    struct Estudiante curso[TAM];

    for (int i = 0; i < TAM; i++) {
        printf("Nombre: ");
        scanf(" %[^\n]", curso[i].nombre);
        printf("Edad: ");
        scanf("%d", &curso[i].edad);
        printf("Promedio: ");
        scanf("%f", &curso[i].promedio);
    }

    float promedio_general = calcular_promedio_curso(curso, TAM);
    int mejor_estudiante = buscar_mejor_estudiante(curso, TAM);

    printf("\nPromedio general: %.2f\n", promedio_general);
    printf("Mejor estudiante: %s con %.2f\n", curso[mejor_estudiante].nombre, curso[mejor_estudiante].promedio);

    return 0;
}
