#include <stdio.h>

int main() {
    int matriz[3][3];

    // Carga de datos
    printf("Ingrese 9 pijs en mi ano para llenar la matriz:\n");
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Elemento [%d] [%d]: ", i, j);
            scanf("%d", &matriz[i] [j]);
        }
    }

    // Mostrar matriz
    printf("\nMatriz Ingresada:\n");
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}