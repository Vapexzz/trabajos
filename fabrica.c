#include <stdio.h>

int main() {
    int produccion[3][5];
    int dias, lineas;
    int max_valor, linea_max, dia_max;
    int total_linea;

    printf("\nIngrese la produccion diaria para cada linea de montaje:\n");

    for (dias = 0; dias < 3; dias++) {
        printf("\nLinea de montaje %d:\n", dias + 1);
        printf("\n");
        for (lineas = 0; lineas < 5; lineas++) {
            printf("Dia %d: ", lineas + 1);
            scanf("%d", &produccion[dias][lineas]);
        }
    }

    max_valor = produccion[0][0];
    linea_max = 1;
    dia_max = 1;

    printf("\n          Resultados:\n");
    printf("----------------------------------\n");

    for (dias = 0; dias < 3; dias++) {
        total_linea = 0;
        
        for (lineas = 0; lineas < 5; lineas++) {
            total_linea += produccion[dias][lineas];
            
            if (produccion[dias][lineas] > max_valor) {
                max_valor = produccion[dias][lineas];
                linea_max = dias + 1;
                dia_max = lineas + 1;
            }
        }
        printf("Produccion total de la linea %d: %d\n", dias + 1, total_linea);
    }
    printf("Mayor valor individual: %d (linea %d, dia %d)\n", max_valor, linea_max, dia_max);
    return 0;
}