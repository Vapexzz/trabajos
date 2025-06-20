#include <stdio.h>

int doble(int n) {
    return n * 2;
}

int main() {
    int numero, resultado;

    printf("\n");
    printf("  Ingresar un numero: ");
    scanf("%d", &numero);
    
    resultado = doble(numero);

    printf("\n------------------------\n");
    printf("     El doble es: %d\n", resultado);
    printf("------------------------\n");

    return 0;
}