#include <stdio.h>

/* Imprime la tabla Fahrenheit-Celsius 
   para fahr = 0, 20, …, 300 */

int main() {
    //int fahr, celsius;
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;    // límite inferior de la tabla de temperaturas
    upper = 300;  // límite superior
    step = 20;    // tamaño del incremento

    fahr = lower;

    while (fahr <= upper) {
        // celsius = 5 * (fahr - 32) / 9;
        celsius = (5.0 / 9.0) * (fahr - 32);
        //printf("%d\t%d\n", fahr, celsius);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}