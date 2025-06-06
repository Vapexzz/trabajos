#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int i, j;
    float numero_mayor = matriz[0][0];

    // Reconocer la matriz para sumar los valores
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] > numero_mayor) {
                numero_mayor = matriz[i][j];
            }
        }
    }

    // Mostrar resultados
    printf("El maor valor dentro de la matriz es: %d\n", numero_mayor);

    return 0;
 }