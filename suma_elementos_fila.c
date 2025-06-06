#include <stdio.h>

int main() {
    int matriz[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    for(int i = 0; i < 4; i++) {
        int suma = 0;
        for (int j = 0; j < 3; j++) {
            suma += matriz[i][j];
        }
        printf("Suma de las filas %d es: %d\n", i, suma);
     }

     return 0;
     
}

