#include <stdio.h>

int x = 0;

// Definicion de la funcion
int suma(int a, int b)
{
    return a + b;
}

int main() {
    int x = 3;
    int y = 5;

    int resultado = sumar(&x, &y);
    printf("------------------------\n");
    printf("     El resultado: %d\n", resultado);
    printf("------------------------\n");

    return 0;
}
