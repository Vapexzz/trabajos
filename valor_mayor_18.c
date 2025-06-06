#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {10, 20, 30},
        {40, 15, 60},
        {70, 80, 90}
    };

    int i, j;
    int mayor_18 = 0;

    // Reconocer la matriz para sumar los valores
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] > 18) {
                mayor_18++;
            }
        }
    }

    // Mostrar resultados
    printf("Existen %d valores mayores a 18 en la matriz\n", mayor_18);

    return 0;
 }