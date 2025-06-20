#include <stdio.h>

// Definicion de la funcion 
int sumar(int a, int b) {
    return a + b;
}

void mostrar_resultado(int resultado) {
    printf("---------------------------------\n");
    printf("      El resultado: %7d\n", resultado);
    printf("---------------------------------\n");
}

int main() {
    int resultado = sumar (3, 5);
    mostrar_resultado(resultado);
    mostrar_resultado(resultado+4);
    mostrar_resultado(resultado+8);
    mostrar_resultado(resultado+2);


    return 0;
} 