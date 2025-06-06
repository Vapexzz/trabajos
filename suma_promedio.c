#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int suma = 0;
    float promedio = 0.0;
    int i, j;

    // Reconocer la matriz para sumar los valores
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            suma += matriz[i][j];
        }
    }

    promedio = suma / 9.0;

    // Mostrar resultados
    printf("Suma total: %d\n", suma);
    printf("Promedio total: %.0f\n", promedio);

    return 0;
 }