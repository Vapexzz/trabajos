#include <stdio.h>

int main() { 
    float matriz[5][3];
    float promedio;

    printf(" Ingrese las 3 notas de  los  estudiantes :\n");

    for (int estudiante = 0; estudiante < 5; estudiante++) {
        printf("\n Estudiante  %d:\n", estudiante + 1);

        for (int nota = 0; nota < 3; nota++) {
            printf(" Nota  %d: ", nota + 1);
            scanf("%f", &matriz[estudiante][nota]);
        } 
    }

    printf("\n Promedio :\n");

    for (int estudiante = 0; estudiante < 5; estudiante++) {
        float suma = 0;
        for (int nota = 0; nota < 3; nota++) {
            suma += matriz[estudiante][nota];
        }

        promedio = suma / 3;
        printf("Estudiante  %d : %.1f\n", estudiante + 1, promedio);
    }

    return 0;
}
