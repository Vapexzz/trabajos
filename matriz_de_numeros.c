#include <stdio.h>

int main() {

    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    int valor, encontrado = 0;

    printf("\nValor critico a buscar: ");
    scanf("%d", &valor);
    
    printf("\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == valor) {
                if (!encontrado) {
                    printf("El valor %d se encuentra en las siguientes posiciones:\n", valor);
                    encontrado = 1;
                }
                printf("[%d][%d]\n", i, j);
            }
        }
    }

    if (!encontrado) {
        printf("El valor %d no fue encontrado en la matriz.\n", valor);
    }
    return 0;
}