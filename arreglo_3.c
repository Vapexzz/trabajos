#include <stdio.h>
#include <string.h>

int main() {
    char nombre[30];

    printf("Ingresa tu nombre: ");
    scanf("%s", nombre);

    printf("Hola, %s\n", nombre);

    return 0;
}