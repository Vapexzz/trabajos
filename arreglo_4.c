#include <stdio.h>

int main() {
    char nombre[30];

    printf("Ingresa tu nombre: ");
    fgets(nombre, 30, stdin);

    printf("Hola, %s\n", nombre);

    return 0;
}