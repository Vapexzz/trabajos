#include <stdio.h>
#include <stdlib.h>

int main() {
    char c; // Variable para almacenar un solo caracter leído

    /*
    Bucle que lee cvaracteres hasta encontrar el final del archivo (EOF)
    En sistemas UNIX/Linux, EOF se envía con la CTRL+D
    En Windows, con CTRL+Z seguido de ENTER
    */
    while ((c = getchar()) != EOF) {
        putchar(c);     // Escribe el caracter en la salida estándar (pantalla)
    }

    // Finaliza el programa exitosamente
    exit(0);
}