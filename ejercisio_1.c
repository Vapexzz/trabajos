#include <stdio.h>

void estudiar(const char *nombre) 
{
    printf(" Hola, %s! Bienvenido al mundo de la programacion en C.\n", nombre);
}

int main() {
    putchar('\n');

    const char nombre[100];
    printf("Dame tu nombre: ");
    scanf("%s", &nombre);
    putchar('\n');

    estudiar(nombre);
    putchar('\n');

    return 0;
}