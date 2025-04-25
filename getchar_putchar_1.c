#include <stdio.h>
#include <stdlib.h>

int main() {
    char c; // Variable para almacenar un solo caracter leído

    c = getchar(); // Lee el primer caracter de la entrada estándar (teclado)

    // Mientras el caracter leído NO sea salto de línea (\n)
    while (c != '\n') {
        putchar(c);     // Escribe el caracter en la salida estándar (pantalla)
        c = getchar();  // Lee el siguiente caracter 
    }

    // Cuando se detecta '\n', se imprime un salto de linea adicional
    printf("\n");

    // Finaliza el programa exitosamente
    exit(0);
}