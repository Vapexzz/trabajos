#include <stdio.h>

/* Imprime la tabla Fahrenheit-Celsius 
   para fahr = 0, 20, …, 300 */

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;    
    upper = 300;  
    step = 20;    

    fahr = lower;

    // Encabezado
    printf("Fahrenheit  Celsius\n");
    printf("-------------------\n");

    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}