#include <stdio.h>

// Prototipos de funciones tal como indica la estructura de la imagen
void lectura(int matriz[3][3]);
void proceso(int matriz[3][3], int *es_magico);
void resultado(int es_magico);
int suma_filas(int matriz[3][3]);
int suma_columnas(int matriz[3][3]);
int suma_diagonales(int matriz[3][3]);

// --- Implementacion de las funciones ---

void lectura(int matriz[3][3]) {
    // Pedimos al usuario que ingrese los valores de la matriz
    printf("Ingrese los 9 numeros del cuadrado 3x3:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Valor para fila %d, columna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int suma_filas(int matriz[3][3]) {
    int suma_esperada = 0;
    
    // Calculamos la suma de la primera fila como referencia
    for(int j = 0; j < 3; j++) {
        suma_esperada += matriz[0][j];
    }

    // Comparamos con las demas filas
    for(int i = 1; i < 3; i++) {
        int suma_actual = 0;
        for(int j = 0; j < 3; j++) {
            suma_actual += matriz[i][j];
        }
        if(suma_actual != suma_esperada) {
            return -1; // Retornamos -1 indicando que ya no es magico
        }
    }
    return suma_esperada;
}

int suma_columnas(int matriz[3][3]) {
    int suma_esperada = 0;
    
    // Calculamos la suma de la primera columna como referencia
    for(int i = 0; i < 3; i++) {
        suma_esperada += matriz[i][0];
    }

    // Comparamos con las demas columnas
    for(int j = 1; j < 3; j++) {
        int suma_actual = 0;
        for(int i = 0; i < 3; i++) {
            suma_actual += matriz[i][j];
        }
        if(suma_actual != suma_esperada) {
            return -1;
        }
    }
    return suma_esperada;
}

int suma_diagonales(int matriz[3][3]) {
    int diagonal_principal = 0;
    int diagonal_secundaria = 0;

    // Sumamos ambas diagonales en un solo ciclo para optimizar
    for(int i = 0; i < 3; i++) {
        diagonal_principal += matriz[i][i];
        diagonal_secundaria += matriz[i][2 - i];
    }

    if(diagonal_principal == diagonal_secundaria) {
        return diagonal_principal;
    }
    return -1;
}

void proceso(int matriz[3][3], int *es_magico) {
    int filas = suma_filas(matriz);
    int columnas = suma_columnas(matriz);
    int diagonales = suma_diagonales(matriz);

    // Verificamos si todas las sumas son iguales y validas
    if(filas != -1 && filas == columnas && columnas == diagonales) {
        *es_magico = 1; // 1 significa verdadero
    } else {
        *es_magico = 0; // 0 significa falso
    }
}

void resultado(int es_magico) {
    // Imprimimos el resultado final sin devolver valores
    if(es_magico == 1) {
        printf("\nLa matriz es un CUADRADO MAGICO.\n");
    } else {
        printf("\nLa matriz NO es un cuadrado magico.\n");
    }
}

// --- Funcion principal al final del programa ---

int main() {
    int matriz[3][3];
    int es_magico = 0; // Variable local que pasaremos por referencia

    lectura(matriz);
    proceso(matriz, &es_magico);
    resultado(es_magico);

    return 0;
}
