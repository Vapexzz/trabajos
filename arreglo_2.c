#include <stdio.h>
#include <string.h>

int main() {
    int i;
    char saludo[] = "Hola Mundo";

    for (i=0; i < strlen(saludo); ++i)
        printf("%c\n", saludo[i]);

    return(0);
}