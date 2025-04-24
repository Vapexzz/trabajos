#include <stdio.h>

/* Imprime la tabla Celsius-Fahrenheit 
   para celsius = 0, 10, …, 100 */

int main() {
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;    // Límite inferior
    upper = 100;  // Límite superior
    step = 10;    // Tamaño del incremento

    celsius = lower;

    // Encabezado
    printf("Celsius  Fahrenheit\n");
    printf("-------------------\n");

    while (celsius <= upper) {
        fahr = (celsius * 9.0 / 5.0) + 32;
        printf("%3.0f %10.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}